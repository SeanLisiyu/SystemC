#include "fulladder.h"
void half_adder::prc_half_adder() {
	sum = a ^ b;
	carry = a & b;
}

void full_adder::prc_or() {
	carry_out = c2 | c1;
}