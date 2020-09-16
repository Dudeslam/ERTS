#include <iostream>
using namespace std;
#include <systemc.h>

SC_MODULE(ModuleDouble) {

    sc_event A, B, Aack, Back;
    sc_uint<4> counter;
    bool alternator;

    SC_CTOR(ModuleDouble) {
        SC_THREAD(thread_A);
        SC_THREAD(thread_B);
        SC_METHOD(method_A);
        sensitive << B;
        alternator = true;
    }
    void thread_A(void){
        while (1){
            wait(3, SC_MS);
            A.notify();
            wait(sc_time(3, SC_MS), Aack);
        }
    }

    void thread_B(void){
        while (1){
            wait(2, SC_MS);
            B.notify();
            wait(sc_time(2, SC_MS), Back);
        }
    }

    void method_A(void){
        counter++;
        if (alternator == true){
            Back.notify();
            cout << name() << " notified by event B at timestamp: " << sc_time_stamp() << endl;
            next_trigger(A);
            alternator = false;
        }
        else{
            Aack.notify();
            cout << name() << " notified by event A at timestamp: " << sc_time_stamp() << endl;
            next_trigger(B);
            alternator = true;
        }
    }
};


