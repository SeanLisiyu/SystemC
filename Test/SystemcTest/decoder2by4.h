#include "systemc.h"


SC_MODULE(decoder2by4) {
	sc_in<bool> enable;
	sc_out<sc_uint<2> > select;
	sc_out<sc_uint<4> > z;


	void pic_decoder2by4();



};
