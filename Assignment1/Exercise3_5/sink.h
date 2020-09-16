#pragma once
#include <systemc.h>



SC_MODULE(Sink) {

	//clock and reset
	sc_in_clk clock;
	sc_in<sc_logic>reset;

	//handshake
	sc_out<sc_logic>ready;
	sc_in<sc_logic>valid;

	//channel, error and data ports ST bus
	sc_in<sc_int<CHANNEL_BITS>> channel;
	sc_in<sc_int<ERROR_BITS>> error;
	sc_in<sc_int<DATA_BITS>> data;


	SC_CTOR(Sink) {
		SC_THREAD(Sink_thread);
	}

	void Sink_thread(void) {
		//out.write(123);		//dummy write
	}


};