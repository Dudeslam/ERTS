#ifndef SIMULATE_PROXY_H_
#define SIMULATE_PROXY_H_

#include "SimulateScheduler.h"
#include "SimulateServant.h"
#include "MethodRequest.h"

class SimulateProxy
{
public:
	SimulateProxy(SimulateScheduler* scheduler) : scheduler_(scheduler) {}

	void incrSimCount()
	{
		MethodRequest* mr = new IncrementSimCount();
		scheduler_->insert(mr);
	}

	// No return value so no need for future

private:

	SimulateScheduler* scheduler_;
};

#endif/*SIMULATE_PROXY_H_*/