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
	sc_fifo_out<sc_uint<DATA_BITS> >  out_data;
	sc_out<bool> data_inc;
	sc_out<sc_uint<DATA_BITS>> Filling;

	SC_CTOR(Master)
	{
		SC_THREAD(SendD);
	}
	void SendD();

private:

};


