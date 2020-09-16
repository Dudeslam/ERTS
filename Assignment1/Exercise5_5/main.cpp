#include <systemc.h>
#include "topLevel.h"

int sc_main(int argc, char** argv)
{
    topLevel top{ "Top" };
    sc_start(500, SC_NS);
    return 0;
}