#include "systemc.h"

SC_MODULE(hello)
{
	SC_CTOR(hello)
	{
		cout << "Hello,lisiyu !!!" << endl;
	}
};
