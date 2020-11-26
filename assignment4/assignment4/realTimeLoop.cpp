#include "RealTimeLoop.h"
#include <iostream>
#include <Windows.h>

// RealTimeLoop
State* RealTimeLoop::inst_ = 0;

State* RealTimeLoop::Instance() {
	if (inst_ == 0) {
		inst_ = new RealTimeLoop;
	}
	return inst_;
}
void RealTimeLoop::EntryAction(EmbeddedSystemX*)
{
	if (!srtctx_ && !amsctx_)
	{
		srtctx_ = new SRTctx();
		amsctx_ = new AMSctx();
	}
}

void RealTimeLoop::Stop(EmbeddedSystemX* ctx) {
	std::cout << "Stopping real time loop" << std::endl;
	delete srtctx_;
	delete amsctx_;
	ChangeState(ctx, Ready::Instance());
}

void RealTimeLoop::Suspend(EmbeddedSystemX* ctx) {
	std::cout << "Suspending real time loop" << std::endl;
	ChangeState(ctx, Suspended::Instance());
}

void RealTimeLoop::chMode(EmbeddedSystemX* ctx)
{
	amsctx_->chMode();
}
void RealTimeLoop::eventX(EmbeddedSystemX* ctx)
{
	amsctx_->eventX();
}
void RealTimeLoop::eventY(EmbeddedSystemX* ctx)
{
	amsctx_->eventY();
}
void RealTimeLoop::RunRealTime(EmbeddedSystemX* ctx)
{
	srtctx_->RunRealTime();
}
void RealTimeLoop::Simulate(EmbeddedSystemX* ctx)
{
	srtctx_->Simulate();
}

const char* RealTimeLoop::stateName()
{
	return "Real Time Loop";
}

