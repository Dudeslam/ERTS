#pragma once
#include <systemc.h>
#include "Config.h"

SC_MODULE(Master)
{
public:
	//clock
	sc_in_clk CLK;

	// Ports
	sc_in<bool> Slave_ready;
	sc_out<bool> data_valid;
	
	
	sc_out<sc_uint<DATA_BITS>> DataHolder;
	sc_out<sc_uint<CHANNEL_BITS> > channel;
	sc_out<sc_uint<ERROR_BITS> > error;

	SC_CTOR(Master)
	{
		SC_THREAD(SendD);
	}
	

private:
	void SendD();
};


