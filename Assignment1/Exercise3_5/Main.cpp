#include "systemc.h"
#include "master.h"
#include "sink.h"
#include "inAdapter.h"
#include "topLevel.h"


int sc_main(int argc, char** argv)
{
    topLevel top("Top-Level");
    sc_start(300, SC_NS);
    cout << "Finished" << endl;
    return 0;
}