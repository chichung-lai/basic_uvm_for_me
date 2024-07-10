


//transaction

class my_transaction extends uvm_sequence_item;

    rand bit [3:0] sa; //source address
    rand bit [3:0] da; //target address
    rand reg [7:0] payload[$]; //data

    `uvm_object_utils_begin(my_transaction)
        `uvm_field_int(sa, UVM_ALL_ON)
        `uvm_field_int(da, UVM_ALL_ON)
        `uvm_field_queue_int(payload, UVM_ALL_ON)
    `uvm_object_utils_end

    constraint limit{
        sa inside {[0:15]};
        da inside {[0:15]};
        payload.size() inside {[2:4]};
    }

    function new(string name = "my_transaction");
        super.new(name);
    endfunction

endclass



class my_transaction_da3 extends my_transaction;

    `uvm_object_utils(my_transaction_da3)

    constraint da3{da == 3;}
    function new(string name = "my_transaction_da3");
        super.new(name);
    endfunction

endclass



// sequence

class my_sequence extends uvm_sequence # (my_transaction);

    `uvm_object_utils(my_sequence)

    int item_num = 10;    
    function new(string name = "my_sequence");
        super.new(name);
    endfunction

    function void pre_randomize();
        uvm_config_db#(int)::get(m_sequencer, "", "item_num", item_num);
    endfunction

    virtual task body();
        if(starting_phase != null)
            starting_phase.raise_objection(this);

        repeat(item_num)begin
            `uvm_do(req)
        end

        #100;
        
        if(starting_phase != null)
            starting_phase.drop_objection(this);
    endtask

endclass



// sequencer
typedef uvm_sequencer # (my_transaction) my_sequencer;





// driver

class my_driver extends uvm_driver #(my_transaction);

    `uvm_component_utils(my_driver)

    virtual dut_interface m_vif;
    int unsigned pad_cycles;

    function new(string name = "my_driver", uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db#(int unsigned)::get(this, "", "pad_cycles", pad_cycles)) begin
            `uvm_fatal("CONFIG_FATAL", "Driver can not get the pad_cycles !!!")
        end
        $display("pad cycles = %0d", pad_cycles);
        if(!uvm_config_db#(virtual dut_interface)::get(this, "", "vif", m_vif)) begin
            `uvm_fatal("CONFIG_FATAL", "Driver can not get the interface !!!")
        end
        uvm_config_db#(virtual dut_interface)::get(this, "", "vif", m_vif);
    endfunction

    virtual task pre_reset_phase(uvm_phase phase);
        super.pre_reset_phase(phase);
        `uvm_info("TRACE", $sformatf("%m"), UVM_HIGH)
        phase.raise_objection(this);
            m_vif.driver_cb.frame_n <= 'x;
            m_vif.driver_cb.valid_n <= 'x;
            m_vif.driver_cb.din <= 'x;
            m_vif.driver_cb.reset_n <= 'x;
        phase.drop_objection(this);
    endtask

    virtual task reset_phase(uvm_phase phase);
        super.reset_phase(phase);
        `uvm_info("TRACE", $sformatf("%m"), UVM_HIGH)
        phase.raise_objection(this);
            m_vif.driver_cb.frame_n <= '1;
            m_vif.driver_cb.valid_n <= '1;
            m_vif.driver_cb.din <= '0;
            m_vif.driver_cb.reset_n <= '1;
            repeat(5) @(m_vif.driver_cb);
                m_vif.driver_cb.reset_n <= '0;
            repeat(5) @(m_vif.driver_cb);
                m_vif.driver_cb.reset_n <= '1;
        phase.drop_objection(this);
    endtask

    virtual task configure_phase(uvm_phase phase);
        phase.raise_objection(this);
        #100;
        `uvm_info("DRV_CONFIGURE_PHASE", "Now driver config the DUT...", UVM_MEDIUM)
        phase.drop_objection(this);
    endtask


    virtual task run_phase(uvm_phase phase);
        logic [7:0] temp;
        repeat(15)@(m_vif.driver_cb);
        forever begin
            seq_item_port.get_next_item(req);
            `uvm_info("DRV_RUN_PHASE", req.sprint(), UVM_MEDIUM) //print
            
            // Send address
            m_vif.driver_cb.frame_n[req.sa] <= 1'b0;
            for(int i=0; i<4; i++) begin
                m_vif.driver_cb.din[req.sa] <= req.da[i];
                @(m_vif.driver_cb);
            end

            //Send pad
            m_vif.driver_cb.din[req.sa] <= 1'b1;
            m_vif.driver_cb.valid_n[req.sa] <= 1'b1;
            repeat(pad_cycles) @(m_vif.driver_cb);

            //Send payload
            while(!m_vif.driver_cb.busy_n[req.sa]) @(m_vif.driver_cb);
            foreach(req.payload[index]) begin
                temp = req.payload[index];
                for(int i=0; i<8; i++) begin
                    m_vif.driver_cb.din[req.sa] <= temp[i];
                    m_vif.driver_cb.valid_n[req.sa] <= 1'b0;
                    m_vif.driver_cb.frame_n[req.sa] <= ((req.payload.size()-1)==index) && (i==7);
                    @(m_vif.driver_cb);
                end
            end
            m_vif.driver_cb.valid_n[req.sa] <= 1'b1;

            seq_item_port.item_done();        
        end
    endtask

endclass




//monitor

class my_monitor extends uvm_monitor;

    `uvm_component_utils(my_monitor)
    
    virtual dut_interface m_vif;

    function new(string name ="", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("TRACE", $sformatf("%m"), UVM_HIGH)
        if(!uvm_config_db#(virtual dut_interface)::get(this, "", "vif", m_vif))begin
            `uvm_fatal("CONFIG_FATAL", "Monitor can not get the interface !!!")
        end
    endfunction

    
    virtual task run_phase(uvm_phase phase);
        my_transaction tr;
        int active_port;
        logic [7:0] temp;
        int count;

        tr = my_transaction::type_id::create("tr");

        while(1)begin
            @(m_vif.imonitor_cb);
            foreach(m_vif.imonitor_cb.frame_n[i])begin
                if(m_vif.imonitor_cb.frame_n[i]==0)begin
                    active_port = i;
                end
            end
        
            if(active_port != 1) break;
        
            // Get the active id
            tr.sa = active_port;

            // Get the target address
            for(int i=0; i<4; i++) begin
                tr.da[i] = m_vif.imonitor_cb.din[tr.sa];
                @(m_vif.imonitor_cb);
            end

            // Get the payload
            forever begin
                if(m_vif.imonitor_cb.valid_n[tr.sa]==0)begin
                    temp[count] = m_vif.imonitor_cb.din[tr.sa];
                    count++;
                    if(count==8)begin
                        tr.payload.push_back(temp);
                        count=0;
                    end
                end
                if(m_vif.imonitor_cb.frame_n[tr.sa])begin
                    if(count!=0)begin
                        tr.payload.push_back(temp);
                        `uvm_warning("PAYLOAD_WARNING", "Payload not byte aligned !!!")
                    end
                    break;
                end
                @(m_vif.imonitor_cb);
            end
            `uvm_info("Monitor",{"\n", "Monitor Got An Input Transaction: \n", tr.sprint()}, UVM_MEDIUM)
        end
    endtask
endclass  



//agent

class master_agent extends uvm_agent;

    `uvm_component_utils(master_agent)

    my_sequencer m_seqr;
    my_driver m_driv;
    my_monitor m_moni;
    bit is_active = 1;
    agent_config m_agent_cfg;    

    function new(string name="", uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (! uvm_config_db#(agent_config)::get(this, "", "m_agent_cfg", m_agent_cfg))begin
            `uvm_fatal("CONFIG_FATAL", "master_agent can not get the configuration !!!")
        end

        is_active = m_agent_cfg.is_active;

        uvm_config_db#(int unsigned)::set(this, "m_driv", "pad_cycles", m_agent_cfg.pad_cycles);
        uvm_config_db#(virtual dut_interface)::set(this, "m_driv", "vif", m_agent_cfg.m_vif);

        uvm_config_db#(virtual dut_interface)::set(this, "m_moni", "vif", m_agent_cfg.m_vif);

        if(is_active == UVM_ACTIVE) begin
            m_seqr = my_sequencer::type_id::create("m_seqr", this);
            m_driv = my_driver::type_id::create("m_driv", this);
        end
        m_moni = my_monitor::type_id::create("m_moni", this);
    endfunction

    virtual function void connect_phase(uvm_phase phase);
        if (is_active == UVM_ACTIVE)
            m_driv.seq_item_port.connect(m_seqr.seq_item_export);
    endfunction


endclass




//env

class my_env extends uvm_env;

    `uvm_component_utils(my_env)

    master_agent m_agent;
    env_config m_env_cfg;   //declarator env_config

    function new(string name="", uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        
        super.build_phase(phase);
        m_agent = master_agent::type_id::create("m_agent", this);

        if (! uvm_config_db#(env_config)::get(this, "", "env_cfg", m_env_cfg))begin
            `uvm_fatal("CONFIG_FATAL", "ENV can not get the configuration !!!")
        end

        uvm_config_db#(agent_config)::set(this, "m_agent", "m_agent_cfg", m_env_cfg.m_agent_cfg);

        if(m_env_cfg.is_coverage) begin
            `uvm_info("COVERAGE_ENABLE", "The function coverage is enabled for this testcase", UVM_MEDIUM)
        end

        if(m_env_cfg.is_check) begin
            `uvm_info("CHECK_ENABLE", "The check function is enabled for this testcase", UVM_MEDIUM)
        end

    endfunction

endclass






//testcase

class my_test extends uvm_test;
    
    `uvm_component_utils(my_test)

    my_env m_env;
    env_config m_env_cfg; //declarator env_config

    function new(string name="", uvm_component parent);
        super.new(name, parent);
        m_env_cfg = new("m_env_cfg");  //imp (Note: Object --> use ""new"" to imp)
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        m_env = my_env::type_id::create("m_env", this);

        uvm_config_db # (uvm_object_wrapper)::set(this, "*.m_seqr.run_phase", "default_sequence", my_sequence::get_type());
        uvm_config_db#(int)::set(this, "*.m_seqr", "item_num", 3);
//============      four parameter to create in ""m_env_cfg  ==============
        m_env_cfg.is_coverage = 1;
        m_env_cfg.is_check = 1;
        m_env_cfg.m_agent_cfg.is_active = UVM_ACTIVE;
        m_env_cfg.m_agent_cfg.pad_cycles = 10;
//=========================================================================
//===========        Top_if to get virtual interface          =============
        if(!uvm_config_db#(virtual dut_interface)::get(this, "", "top_if", m_env_cfg.m_agent_cfg.m_vif))begin
            `uvm_fatal("CONFIG_ERROR", "test can not get the interface!!!")
        end
	// Top_fifo --> (env_config) --> test
//=========================================================================
        uvm_config_db#(env_config)::set(this, "m_env", "env_cfg", m_env_cfg); 
	// Test --> (env_config) --> env_fifo
    endfunction

    virtual function void start_of_simulation_phase(uvm_phase phase);
        super.start_of_simulation_phase(phase);
        uvm_top.print_topology(uvm_default_tree_printer); //print
    endfunction

endclass


class my_test_type_da3 extends my_test;

    `uvm_component_utils(my_test_type_da3)

    function new(string name="", uvm_component parent);
        super.new(name, parent);
    endfunction
   
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        set_type_override_by_type(my_transaction::get_type(), 
                                  my_transaction_da3::get_type()); 
    endfunction 


    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        factory.print();
    endfunction

endclass








