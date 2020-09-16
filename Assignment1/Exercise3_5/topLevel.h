#pragma once

#define CHANNEL_BITS 16
#define ERROR_BITS 4
#define DATA_BITS 8
#include "master.h"
#include "inAdapter.h"
#include "sink.h"



SC_MODULE(topLevel) {
public:
	//Declare modules
	Master instMaster;
	InAdapter<int> inAdapt;
	Sink dataSink;

	//Declare signals
	sc_clock clock;
	sc_signal<sc_logic> reset;
	sc_signal<sc_logic> valid;
	sc_signal<sc_logic> ready;
	sc_signal<sc_int<CHANNEL_BITS>> channel;
	sc_signal<sc_int<ERROR_BITS>> error;
	sc_signal<sc_int<DATA_BITS>> data;

	sc_fifo<int> comMasAdapt;
	

	sc_trace_file* tf;

	SC_CTOR(topLevel);

	~topLevel();
};