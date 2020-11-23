#include "State.h"
#include "EmbeddedSystemX.h"

void State::ChangeState(EmbeddedSystemX* t, State* s)
{
	t->ChangeState(s);
}

void State::SelfTestOk(EmbeddedSystemX*){}
void State::Initialized(EmbeddedSystemX*){}
void State::Restart(EmbeddedSystemX*){}
void State::Configure(EmbeddedSystemX*){}
void State::ConfigurationEnded(EmbeddedSystemX*){}
void State::Exit(EmbeddedSystemX*){}
void State::Stop(EmbeddedSystemX*){}
void State::Start(EmbeddedSystemX*){}
void State::Suspend(EmbeddedSystemX*){}
void State::Resume(EmbeddedSystemX*){}
void State::SelfTestFailed(EmbeddedSystemX*, int ErrorNo){}
void State::ConfigX(EmbeddedSystemX*){}
void State::chMode(EmbeddedSystemX*){}
void State::eventX(EmbeddedSystemX*){}
void State::eventY(EmbeddedSystemX*){}

void State::EntryAction(EmbeddedSystemX*){}
const char* State::stateName()
{
	return "None";
}
