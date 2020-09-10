//============================================================================
// Name        : main.cpp
// Author      : Kim Bjerge
// Version     : 22. feb 2008
// Copyright   : Danish Technological Institute
// Description : Example of a parameterized design using templates
//============================================================================
#include "TCPPackage.h"
#include "systemc.h"
#include "TCP.h"
#include <iostream>

int sc_main(int argc, char* argv[]) {
    Producer producer("producer");
    srand(time(NULL));
    sc_start(10, SC_NS);
    return 0;
}