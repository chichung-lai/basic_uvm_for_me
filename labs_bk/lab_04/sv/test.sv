import uvm_pkg::*;
//`include "uvm_macros.svh"
//`include "dut_interface.sv"
//`include "agent_config.sv"
//`include "my_transaction.sv"
`include "router.v"


module top;

    bit sys_clk;
    logic  reset_n; 
    logic  clock  ; 
    logic [15:0] frame_n; 
    logic [15:0] valid_n; 
    logic [15:0] din    ; 
    logic [15:0] dout   ; 
    logic [15:0] busy_n ; 
    logic [15:0] valido_n;
    logic [15:0] frameo_n;
//    dut_interface inf(sys_clk);

    router dut( .reset_n (reset_n),
                .clock   (clk),
                .frame_n (frame_n),
                .valid_n (valid_n),
                .din     (din),
                .dout    (dout),
                .busy_n  (busy_n),
                .valido_n(valido_n),
                .frameo_n(frameo_n)
               );

    initial begin
        sys_clk = 1'b0;
        forever #10 sys_clk = ~sys_clk;
    end

    initial begin
//        uvm_config_db#(virtual dut_interface)::set(null, "uvm_test_top", "top_if", inf);
//        run_test();
          reset_n = 1;
          #10
          reset_n = 0;
          #100
	  $finish;
    end

    initial begin
        $fsdbDumpfile("tb_top.fsdb");
        $fsdbDumpvars;
    end

endmodule



