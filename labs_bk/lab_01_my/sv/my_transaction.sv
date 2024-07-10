//transaction

class my_transaction extends uvm_sequence_item;

    rand bit [3:0] sa; //source address
    rand bit [3:0] da; //target address
    rand reg [7:0] payload[$]; //data

    `uvm_object_utils_begin(my_transaction)
        `uvm_field_int(sa, UVM_ALL_ON)
        `uvm_field_int(sa, UVM_ALL_ON)
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
