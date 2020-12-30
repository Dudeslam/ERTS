// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module borders_ok (
        ap_ready,
        y,
        x,
        ap_return
);


output   ap_ready;
input  [8:0] y;
input  [9:0] x;
output  [0:0] ap_return;

wire   [1:0] tmp_2826_fu_38_p4;
wire   [0:0] tmp_1_fu_32_p2;
wire   [0:0] icmp_fu_48_p2;
wire   [0:0] tmp2_fu_60_p2;
wire   [0:0] tmp_fu_54_p2;

assign ap_ready = 1'b1;

assign ap_return = (tmp_fu_54_p2 & tmp2_fu_60_p2);

assign icmp_fu_48_p2 = ((tmp_2826_fu_38_p4 != 2'd1) ? 1'b1 : 1'b0);

assign tmp2_fu_60_p2 = (tmp_1_fu_32_p2 & icmp_fu_48_p2);

assign tmp_1_fu_32_p2 = (($signed(x) > $signed(10'd0)) ? 1'b1 : 1'b0);

assign tmp_2826_fu_38_p4 = {{x[9:8]}};

assign tmp_fu_54_p2 = (($signed(y) > $signed(9'd0)) ? 1'b1 : 1'b0);

endmodule //borders_ok