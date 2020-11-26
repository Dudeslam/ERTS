#include "SRTctx.h"
#include "SRTState.h"
#include <iostream>

SRTctx::SRTctx() {
	std::cout << "Concurrent State Machine SimulateRealTimeState has been started. Entering initial state 'RealTimeExecution'. " << std::endl;

	this->ChangeState(RealTimeExecution::Instance());
}

void SRTctx::ChangeState(SRTState* state)
{
	//only prints leaving state if it is in a state, otherwise it only enters a state
	if (_state != state)
	{
		if (_state != 0)
		{
			std::cout << "Leaving state: " << _state->stateName() << std::endl;
		}
		_state = state;
	}
	std::cout << "Entering state: " << _state->stateName() << std::endl;
	std::cout << std::endl;
	_state->EntryAction(this);
}

void SRTctx::RunRealTime()
{
	_state->RunRealTime(this);
}

void SRTctx::Simulate()
{
	_state->Simulate(this);
}

void SRTctx::Stop()
{
	_state->Stop(this);
}

void SRTctx::Suspend()
{
	_state->Suspend(this);
}