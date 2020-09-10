#include <iostream>
using namespace std;
#include <systemc.h>

SC_MODULE(ModuleSingle) {

    sc_event A;
    sc_uint<4> counter;

    SC_CTOR(ModuleSingle) {
        SC_THREAD(thread_A);;
        SC_METHOD(method_A);
        sensitive << A;
    }
    void thread_A(void)
    {
        while (1)
        {
            wait(2, SC_MS);
            A.notify();;
        }
    }


    void method_A(void)
    {
        counter++;
        cout << name() << " incremented counter value to: " << counter << " at timestamp: " << sc_time_stamp() << endl;
    }
};

