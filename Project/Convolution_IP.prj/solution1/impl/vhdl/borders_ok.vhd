-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity borders_ok is
port (
    ap_ready : OUT STD_LOGIC;
    y : IN STD_LOGIC_VECTOR (8 downto 0);
    x : IN STD_LOGIC_VECTOR (9 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (0 downto 0) );
end;


architecture behav of borders_ok is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal tmp_2826_fu_38_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_1_fu_32_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_fu_48_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp2_fu_60_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_54_p2 : STD_LOGIC_VECTOR (0 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= (tmp_fu_54_p2 and tmp2_fu_60_p2);
    icmp_fu_48_p2 <= "0" when (tmp_2826_fu_38_p4 = ap_const_lv2_1) else "1";
    tmp2_fu_60_p2 <= (tmp_1_fu_32_p2 and icmp_fu_48_p2);
    tmp_1_fu_32_p2 <= "1" when (signed(x) > signed(ap_const_lv10_0)) else "0";
    tmp_2826_fu_38_p4 <= x(9 downto 8);
    tmp_fu_54_p2 <= "1" when (signed(y) > signed(ap_const_lv9_0)) else "0";
end behav;
