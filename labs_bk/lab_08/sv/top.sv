`include "my_transaction.sv"
`include "dut_interface.sv"
`include "uvm_macros.svh"
import uvm_pkg::*;
//`include "../../rtl/router.v"


module top;

    bit sys_clk;

    dut_interface inf(sys_clk);

    routere dut(.reset_n (inf.reset_n),
                .clock   (inf.clk),
                .frame   (inf.frame_n),
                .valid_n (inf.valid_n),
                .din     (inf.din),
                .dout    (inf.dout),
                .busy_n  (inf.busy_n),
                .valido_n(inf.valido_n),
                .frameo_n(inf.frameo_n),
               );

    initial begin
        sys_clk = 1'b0;
        forever #10 sys_clk = ~sys_clk;
    end

    initial begin
        uvm_config_db#(virtual dut_interface)::set(null, "uvm_test_top", "top_if", inf);
        run_test();
    end

    initial begin
        $fsdbDumpfile("../tb/tb_top.fsdb");
    end

endmodule



