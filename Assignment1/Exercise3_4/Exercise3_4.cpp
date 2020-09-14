#include <systemc.h>
#include "Config.h"
#include "Master.h"
#include "Slave.h"


int sc_main(int argc, char** argv)
{
    Master Mas("Master");
    Slave Slav("Slave");

    sc_start(200, SC_MS);
    return 0;
}