#include <systemc.h>
#include "Config.h"
#include "Master.h"
#include "Slave.h"
#include "Top.h"


int sc_main(int argc, char** argv)
{
    Top top("Top-Level");
    sc_start(200, SC_MS);
    cout << "Finished" << endl;
    return 0;
}