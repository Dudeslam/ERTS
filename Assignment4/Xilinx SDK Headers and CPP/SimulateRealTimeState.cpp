/*
 * SimulateRealTimeState.c
 *
 *  Created on: 25. nov. 2020
 *      Author: Trung
 */

#include "SimulateRealTimeState.h"
#include "realTimeLoop.h"

SimulateRealTimeState::SimulateRealTimeState(char name)
{
	std::cout << "SimulateRealTimeState instantiated. Entering RealTimeExecution" << std::endl;
	this->ChangeState(RealTimeExecution::Instance());
	name_ = name;
}


void SimulateRealTimeState::RunRealTime()
{
	state_->Simulate(this);
}


void SimulateRealTimeState::Simulate()
{
	state_->RunRealTime(this);
}


void SimulateRealTimeState::ChangeState(SRTState* s)
{
		//only prints leaving state if it is in a state, otherwise it only enters a state
		if (state_ != s)
		{
		 if (state_ != 0)
			{
				std::cout << "Leaving state: " << state_->stateName() << std::endl;
			}
			state_ = s;
		}
		std::cout << "Entering state: " << state_->stateName() << std::endl;
		std::cout << std::endl;
		state_->EntryAction(this);
	}
