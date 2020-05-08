#include "systemc.h"
SC_MODULE(nand2){               // Declare nand2 sc_module. 
                                // SC_MODULE has the same intention as module in Verilog.
    sc_in<bool>     A, B;       // Input signal ports
    sc_out<bool>    F;          // Output signal ports

    void do_nand2(){            // This is just a C++ function
        F.write(!(A.read() && B.read()));           
    }

    SC_CTOR(nand2){             // constructor for the nand2
        cout << "Constructing nand2 " << name() << endl;
        SC_METHOD(do_nand2);    // Register do_nand2 with kernal
        sensitive << A << B;    // Sensitivity list
    }
};