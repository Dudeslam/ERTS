#pragma once

#include "Config.h"
#include "Master.h"
#include "inAdapter.h"
#include "Slave.h"



SC_MODULE(topLevel) {
	
public:
	//Declare modules
	InAdapter<int> inAdapt;
	Slave instSlave;
	Master instMaster;

	//Declare signals
	sc_clock clock;
	sc_signal<sc_logic> reset;
	sc_signal<sc_logic> valid;
	sc_signal<sc_logic> ready;
	sc_signal<sc_uint<CHANNEL_BITS>> channel;
	sc_signal<sc_uint<ERROR_BITS>> error;
	sc_signal<sc_uint<DATA_BITS>> data;

	sc_trace_file* tf;

	SC_CTOR(topLevel):
		inAdapt("adapter"),
		instSlave("slave"),
		instMaster("master"),
		clock("clock", sc_time(CLK_PERIODE, SC_NS)),
		ready("ready"),
		valid("valid"),
		reset("reset"),
		data("data"),
		error("error"),
		channel("channel")
	{
		// Reset release
		reset = SC_LOGIC_0;
		
		// Master bindings
		instMaster.out(inAdapt);

		// inAdapter bindings
		inAdapt.clock(clock);
		inAdapt.ready(ready);
		inAdapt.valid(valid);
		inAdapt.reset(reset);
		inAdapt.error(error);
		inAdapt.channel(channel);
		inAdapt.data(data);

		// Slave bindings
		instSlave.CLK(clock);
		instSlave.Slave_ready(ready);
		instSlave.data_valid(valid);
		instSlave.error(error);
		instSlave.channel(channel);
		instSlave.DataHolder(data);

		// Create VCD waveform file
		tf = sc_create_vcd_trace_file("3.5_exercise_trace");
		if (!tf) {
			cout << "Unable to create trace file!" << endl;
			exit(-1);
		}

		tf->set_time_unit(1, SC_NS);
		sc_trace(tf, clock, "CLK");
		sc_trace(tf, ready, "Slave_Ready");
		sc_trace(tf, valid, "Data_Valid");
		sc_trace(tf, data, "data");
		sc_trace(tf, error, "error");
		sc_trace(tf, channel, "channel");
		sc_trace(tf, reset, "reset");
		
	}


	~topLevel()
	{
		sc_close_vcd_trace_file(tf);
	}
};