#include "systemc.h"

SC_MODULE(driver) {
	sc_out<bool>  d_a, d_b, d_cin;

	void prc_driver();

	SC_CTOR(driver) {
	
	}
};
