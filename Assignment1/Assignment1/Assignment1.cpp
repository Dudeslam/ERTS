//main
#include "systemc.h"
#include "SingleMod.h"

int sc_main(int argc, char* argv[])
{
	SingleMod SGmod("SGmod");
	sc_uint<4> inc = 0;
	SGmod.SingleMod_incr(inc);
	return 0;
}