#ifndef SRT_STATE_H_
#define SRT_STATE_H_

#include <iostream>
#include <stdlib.h>
#include "SimulateServant.h"
#include "SimulateScheduler.h"
#include "SimulateProxy.h"


class SRTctx;

class SRTState
{
public:

	virtual void RunRealTime(SRTctx*);
	virtual void Simulate(SRTctx*);
	virtual void EntryAction(SRTctx*);
	virtual void Stop(SRTctx*);
	virtual void Suspend(SRTctx*);
	
	virtual const char* stateName();
	
protected:
	virtual void ChangeState(SRTctx* ctx, SRTState* s);

};

class Simulation : public SRTState
{
public:
	Simulation();

	static SRTState* Instance();
	void RunRealTime(SRTctx*) override;
	void EntryAction(SRTctx*) override;

	const char* stateName();
private:
	static SRTState* inst_;
	SimulateScheduler _scheduler;
	SimulateProxy _proxy;
	SimulateServant _servant;
};


class RealTimeExecution : public SRTState
{
public:
	static SRTState* Instance();
	void Simulate(SRTctx*) override;

	const char* stateName();
private:
	static SRTState* inst_;
};

#endif /* SRT_STATE_H_ */
