class driver_base_callback extends uvm_callback;
    function new(string name="driver_base_callback");
        super.new(name);
    endfunction

    virtual task pre_send(my_driver drv);
    endtask

    virtual task post_send();
    endtask

endclass



class driver_error_callback extends driver_base_callback;

    function new(string name="driver_error_callback");
        super.new(name);
    endfunction

    virtual task pre_send(my_driver drv);
        drv.req.payload.push_back(5'b10101);
    endtask

endclass


class driver_info_callback extends driver_base_callback;

    function new(string name="driver_info_callback");
        super.new(name);
    endfunction

    virtual task post_send();
        `uvm_info("DRIVER_CALLBACK", "This information is for UVM Callback test !!!", UVM_MEDIUM)
    endtask

endclass









