#pragma once
#include "topLevel.h"

topLevel() :
	instMaster("instMaster"),
	inAdapt("instAdapter"),
	dataSink("dataSink"),
	clock("clock"),	//clock("clock", sc_time(20, SC_NS))
	reset("reset"),
	valid("valid"),
	ready("ready"),
	channel("channel"),
	error("error"),
	data("data")
{

	reset = SC_LOGIC_0; // Reset release

	// Connect source fifo out port to adapter
	instMaster.out(comMasAdapt);

	// Connecting BCAM signals to adapter and ST sink
	inAdapt.clock(clock);
	inAdapt.reset(reset);
	inAdapt.valid(valid);
	inAdapt.ready(ready);
	inAdapt.error(error);
	inAdapt.channel(channel);
	inAdapt.data(data);

	// ST sink connect to signals
	dataSink.clock(clock);
	dataSink.reset(reset);
	dataSink.valid(valid);
	dataSink.ready(ready);
	dataSink.error(error);
	dataSink.channel(channel);
	dataSink.data(data);
}


~topLevel() {
	sc_close_vcd_trace_file(tf);
	cout << "Trace file created successfully." << endl;
}