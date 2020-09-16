
#include <systemc.h>
#include "Consumer.h"
#include "Producer.h"

int sc_main(int argc, char** argv) {
    // Declare modules
    Producer prod("ProducerModule");
    Consumer cons1("ConsumerModule1");
    Consumer cons2("ConsumerModule2");

    // Declare channels
    sc_fifo<TCPHeader*> tcp_channel1("C1");
    sc_fifo<TCPHeader*> tcp_channel2("C2");

    // Connect ports to channels
    prod.tcp_out(tcp_channel1);
    prod.tcp_out(tcp_channel2);
    cons1.tcp_in(tcp_channel1);
    cons2.tcp_in(tcp_channel2);

    // Start simulation
    sc_start(200, SC_MS);
    return 0;
}