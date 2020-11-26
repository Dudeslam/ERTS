#include "SimCount.h"

SimCount* SimCount::inst_ = 0;

SimCount* SimCount::Instance() {
	if (inst_ == 0) {
		inst_ = new SimCount;
	}
	return inst_;
}

void SimCount::increment()
{
	++count_;
	std::cout << "Incremented Count: " << count_ << std::endl;
}