#ifndef METHOD_REQUEST_H_
#define METHOD_REQUEST_H_

#include "SimCount.h"

class MethodRequest
{
public:
	MethodRequest() {}
	virtual ~MethodRequest(){}
	virtual void Call() = 0;
};

class IncrementSimCount : public MethodRequest
{
public:
	IncrementSimCount(){}
	~IncrementSimCount(){}
	
	void Call() override
	{
		SimCount::Instance()->increment();
	}
};

#endif /*METHOD_REQUEST_H_*/