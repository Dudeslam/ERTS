#ifndef SIM_COUNT_H_
#define SIM_COUNT_H_

#include <iostream>

class SimCount
{
public:
	
	static SimCount* Instance();

	void increment();

private:
	static SimCount* inst_;
	int count_ = 0;
};

#endif /*SIM_COUNT_H_*/