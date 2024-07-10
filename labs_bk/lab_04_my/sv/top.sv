//`include "router.v"
import uvm_pkg::*;
`include "uvm_macros.svh"
`include "dut_interface.sv"
`include "my_transaction.sv"

module top;

    bit sys_clk;

    dut_interface inf(sys_clk);

    router dut( .reset_n (inf.reset_n),
                .clock   (inf.clk),
                .frame_n (inf.frame_n),
                .valid_n (inf.valid_n),
                .din     (inf.din),
                .dout    (inf.dout),
                .busy_n  (inf.busy_n),
                .valido_n(inf.valido_n),
                .frameo_n(inf.frameo_n)
               );

    initial begin
        sys_clk = 1'b0;
        forever #10 sys_clk = ~sys_clk;
    end

    initial begin
        uvm_config_db#(virtual dut_interface)::set(null, "*.m_agent.*", "vif", inf);
        run_test();
    end

    initial begin
        $fsdbDumpfile("tb_top.fsdb");
    end

endmodule



