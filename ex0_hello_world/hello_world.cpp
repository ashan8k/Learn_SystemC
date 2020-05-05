#include <systemc.h>

SC_MODULE (hello) {  // module named hello
  SC_CTOR (hello) {  //constructor phase, which is empty in this case
  }

  void say_hello() {
    std::cout << "Hello World!!!\nLet's learn SystemC" << std::endl;
  }
};

int sc_main(int argc, char* argv[]) {
  hello h("hello1");
  h.say_hello();
  return 0;
}