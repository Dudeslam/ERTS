
call C:/Xilinx/Vivado/2017.4/bin/xelab xil_defaultlib.apatb_conv_3x3_strm_top glbl -prj conv_3x3_strm.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver --initfile "C:/Xilinx/Vivado/2017.4/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s conv_3x3_strm 
call C:/Xilinx/Vivado/2017.4/bin/xsim --noieeewarnings conv_3x3_strm -tclbatch conv_3x3_strm.tcl

