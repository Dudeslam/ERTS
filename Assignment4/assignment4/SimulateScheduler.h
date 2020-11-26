#ifndef SIMULATE_SCHEDULER_H_
#define SIMULATE_SCHEDULER_H_

#include "MethodRequest.h"
#include <queue>

class SimulateScheduler
{
public:
	SimulateScheduler() {}

	void insert(MethodRequest* mr)
	{
		// Here we should use a semaphore for locking access if the queue is empty.

		_queue.push(mr);
		++count_;
	}

	MethodRequest* dispatch()
	{
		if (count_ > 0)
		{
			MethodRequest* mr = _queue.front();
			_queue.pop();
			--count_;
			return mr;
		}
		else
		{
			return NULL;
		}
	}
	
private:
	std::queue<MethodRequest*> _queue;
	int count_ = 0;
};

#endif /*SIMULATE_SCHEDULER_H_*/