#include <systemc.h>
#include "Consumer.h"
#include "Producer.h"

int sc_main(int argc, char** argv)
{
    Producer prod{ "ProducerModule" };
    Consumer cons{ "ConsumerModule" };
    sc_start(200, SC_MS);
    return 0;
}