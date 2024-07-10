module router(
  input reset_n,
  input clock,
  input [15:0] frame_n,
  input [15:0] valid_n,
  input [15:0] din,
  output reg [15:0] dout,
  output reg busy_n,
  output reg [15:0] valido_n,
  output reg [15:0] frameo_n);

always@(posedge clock)
begin
  if (!reset_n)begin
    dout <= 16'b0;
    frameo_n <= 16'b0;
    valido_n <= 16'b0;
    busy_n <= 1'b0;
  end
  else
  begin
    busy_n <= 1'b1;
    frameo_n <= frame_n;
    valido_n <= valid_n;
    dout <= din;
  end
end
endmodule
