
program automatic test;

    import uvm_pkg::*;
    `include "uvm_macros.svh"
    `include "my_transaction.sv"

    initial begin
        run_test();
    end

    initial begin
        $fsdbDumpfile("../tb/tb_top.fsdb");
        $fsdbDumpvars(0,tb_top);
    end

endprogram


