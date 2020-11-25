#include "SRTState.h"
#include "SimulateRealTimeState.h"
#include <iostream>


void SRTState::ChangeState(SimulateRealTimeState* t, SRTState* s)
{
	t->ChangeState(s);
}


void SRTState::RunRealTime(SimulateRealTimeState*)
{
	std::cout << "Invalid input" << std::endl;
}

void SRTState::Simulate(SimulateRealTimeState*)
{
	std::cout << "Invalid input" << std::endl;
}

void SRTState::Stop(SimulateRealTimeState*)
{
	std::cout << "Invalid input" << std::endl;
}

void SRTState::Suspend(SimulateRealTimeState*)
{
	std::cout << "Invalid input" << std::endl;
}

void SRTState::EntryAction(SimulateRealTimeState*)
{

}

