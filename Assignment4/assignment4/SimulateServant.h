#ifndef SIMULATE_SERVANT_H_
#define SIMULATE_SERVANT_H_

#include <thread>
#include "SimulateScheduler.h"
#include "Windows.h"

class SimulateServant
{
public:
	SimulateServant(SimulateScheduler* scheduler) : scheduler_(scheduler) {}

	void runThread()
	{
		servant_ = std::thread(&SimulateServant::run, this);
	};

	void run()
	{
		for (;;)
		{
			Sleep(100);
			MethodRequest* mr = scheduler_->dispatch();
			if (mr)
			{
				mr->Call();
				delete mr;
			}
		}
	}

private:
	std::thread servant_;
	SimulateScheduler* scheduler_;
};

#endif /* SIMULATE_SERVANT_H_ */