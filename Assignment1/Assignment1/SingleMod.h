#pragma once
#include "systemc.h"

SC_MODULE(SingleMod) {

	SC_CTOR(SingleMod) {
		SC_THREAD(SingleMod_incr);
	}
	
	void SingleMod_incr(sc_uint<4> inc);
};