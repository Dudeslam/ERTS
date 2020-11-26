
#include "SRTState.h"
#include "SRTctx.h"

// SRTState basestate for the SimulateRealTimeStates
void SRTState::RunRealTime(SRTctx*){}
void SRTState::Simulate(SRTctx*){}
void SRTState::EntryAction(SRTctx*){}
void SRTState::Stop(SRTctx*){}
void SRTState::Suspend(SRTctx*){}

const char* SRTState::stateName()
{
	return "None";
}

void SRTState::ChangeState(SRTctx* ctx, SRTState* s)
{
	ctx->ChangeState(s);
}


// Simulation state
SRTState* Simulation::inst_ = 0;

// in the constructor we initialize the active object scheduler, proxy and servant and we start the servant thread.
Simulation::Simulation() : _scheduler(SimulateScheduler()),
_proxy(SimulateProxy(&_scheduler)),
_servant(SimulateServant(&_scheduler))
{
	_servant.runThread();
}

SRTState* Simulation::Instance() {
	if (inst_ == 0) {
		inst_ = new Simulation;
	}
	return inst_;
}

void Simulation::EntryAction(SRTctx* ) {
	_proxy.incrSimCount();
}

const char* Simulation::stateName() {
	return "Simulation";
}

void Simulation::RunRealTime(SRTctx* ctx)
{
	ChangeState(ctx, RealTimeExecution::Instance());
}


// Real Time Execution state
SRTState* RealTimeExecution::inst_ = 0;

SRTState* RealTimeExecution::Instance() {
	if (inst_ == 0) {
		inst_ = new RealTimeExecution;
	}
	return inst_;
}

const char* RealTimeExecution::stateName() {
	return "Real Time Execution";
}

void RealTimeExecution::Simulate(SRTctx* ctx)
{
	ChangeState(ctx, Simulation::Instance());
}

