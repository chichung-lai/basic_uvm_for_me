`include "my_transaction.sv"
`include "dut_interface.sv"
`include "uvm_macros.svh"
import uvm_pkg::*;
`include "yapp_router.v"


module top;

    bit sys_clk;
    bit reset;

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


  yapp_router yapp_router(
               .clock       (sys_clk         )
              ,.reset       (reset           )
              ,.error       (                ) // output of dut

              ,.in_data     (inf.in_data     )
              ,.in_data_vld (inf.in_data_vld )
              ,.in_suspend  (inf.in_suspend  )

              ,.data_0      (                )
              ,.data_vld_0  (                )
              ,.suspend_0   (1'b0            )
              ,.data_1      (                )
              ,.data_vld_1  (                ) 
              ,.suspend_1   (1'b0            ) 
              ,.data_2      (                )
              ,.data_vld_2  (                )
              ,.suspend_2   (1'b0            )
     
              // Host Interface Signals
              // input [7:0] haddr,
              // inout [7:0] hdata,
              // input hen,
              // input hwr_rd
              );

    initial begin
        sys_clk = 1'b0;
        forever #10 sys_clk = ~sys_clk;
    end

    initial begin
        uvm_config_db#(virtual dut_interface)::set(null, "*.m.agent.*", "vif", inf);
        ren_test();
    end

    initial begin
        $fsdbDumpfile("../tb/top.fsdb");
        $fsdbDumpvars(0,top);
    end

endmodule



