class out_monitor extends uvm_monitor;

    `uvm_component_utils(out_monitor)

    virtual dut_interface m_vif;
    uvm_blocking_put_port #(my_transaction) m2s_port; // slave monitor to scoreboard

    function new(string name="", uvm_componet parent);
        super.new(name, parent);
        this.m2s_port = new("m2s_port", this);
    endfunction

    virtual function void build_phase(uvm_phase, phase);
        super.build_phase(phase)
        `uvm_info("TRACE", $sformatf("%m"),  UVM_HIGH)
        if(!uvm_config_db#(virtual dut interface)::get(this, "", "vif", m_vif))begin
            `uvm_fatal("CONFIG_FATAL", "Out Monitor can not get the interface !!!")
        end
    endfunction

    vittual task run_phase(uvm_phae phase);
        
        my_transaction tr;
        int active_port;
        logic [7:0] temp;
        int count;

        forever begin

            active_port = -1;
            count = 0;

            tr = my_transaction::type_id::create("tr");

            // Wait for bus active
            while(1) begin
                @(m_vif.omonitor_cb);
                foreach(m_vif.omonitor_cb.frameo_n[i])begin
                    if((m_vif.omonitor_cb.frameo_n[i] == 0) active_port = i;
                end
                
                if(active_port != -1) break;
            end            

            // Active port has been Deteced
            tr.da = active_port;

            // Get the payload
            forever begin
                if(m_vif.omonitor_cb.valido_n[tr.da]==0) begin
                    temp[count] = m_vif.omonitor_cb.dout[tr.da];
                    count++;
                    if(count==8) begin
                        tr.payload.push_back(temp);
                        count = 0;
                    end
                end

                if(m_vif.omonitor_cb.frameo_n[tr.da])begin
                    if(count != 0)begin
                        tr.payload.push_back(temp);
                        `uvm_warning("PAYLOAD_WARNING", "Payload not byte aligned !!!")
                    end
                    break;
                end
                @(m_vif.omonitor_cb);
            end

            `uvm_info("Out_Monitor", {"\n", "Out monitor Got An output transaction:\n", tr.sprint()}, UVM_MEDIUM)
            `uvm_info("Out_Monitor", "Now out monitor send the transaction to the Scoreboard!", UVM_MEDIUM)
            this.m2s_port.put(tr);
        end

    endtask


endclass






// slave agent

class slave_agent extends uvm_agent;

    `uvm_component_utils(slave_agent)

    out_monitor m_moni;
    agent_config m_agent_cfg;
    uvm_blocking_put_export # (my_transaction) s_a2s_export; //agent to scoreboard

    function new(string name="", uvm_component parent)
        supr.new(name, parent);
        this.s_a2s_export = new("s_a2s_export", this);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
    
        if(!uvm_config_db#(agent_config)::get(this, "", "m_agent_cfg", m_agent_cfg))begin
            `uvm_fatal("CONFIG_FATAL", "slave_agent con not get the configuration !!!")
        end

        uvm_config_db#(virtual dut_interface)::set(this, "m_moni", "vif", m_agent_cfg.m_vif);
        m_moni = out_monitor::type_id::create("m_moni", this);
    endfunction

    virtual function void connect_phase(uvm_phase phase);
        m_moni.m2s_port.connect(this.s_a2s_export); // slave monitor connect to this agent 
    endfunction


endclass













