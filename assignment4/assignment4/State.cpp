#include "State.h"
#include "EmbeddedSystemX.h"
#include <iostream>

void State::ChangeState(EmbeddedSystemX* t, State* s)
{
	t->ChangeState(s);
}

void State::SelfTestOk(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Initialized(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Restart(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Configure(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::ConfigurationEnded(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Exit(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Stop(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Start(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Suspend(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Resume(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::SelfTestFailed(EmbeddedSystemX*, int ErrorNo) { std::cout << "Invalid input" << std::endl; };
void State::ConfigX(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::chMode(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::eventX(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::eventY(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::Simulate(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };
void State::RunRealTime(EmbeddedSystemX*) { std::cout << "Invalid input" << std::endl; };

void State::EntryAction(EmbeddedSystemX*){}
const char* State::stateName()
{
	return "None";
}
