#include "AMSctx.h"
#include "AMSState.h"
#include <iostream>


AMSctx::AMSctx() {
	std::cout << "Concurrent State Machine ApplicationModeSetting has been started. Entering initial state 'Mode1'. " << std::endl;

	this->ChangeState(Mode1::Instance());
}


void AMSctx::ChangeState(AMSState* state)
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

void AMSctx::chMode()
{
	_state->chMode(this);
}

void AMSctx::eventX()
{
	_state->eventX(this);
}

void AMSctx::eventY()
{
	_state->eventY(this);
}

void AMSctx::Stop()
{
	_state->Stop(this);
}

void AMSctx::Suspend()
{
	_state->Suspend(this);
}