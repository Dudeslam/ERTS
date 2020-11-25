#include "EmbeddedSystemX.h"
#include "State.h"
#include "ConcreteStates.h"
#include <iostream>
#include <string>

EmbeddedSystemX::EmbeddedSystemX(const char* name, int versNo){
	std::cout << "EmbeddedSystemX has been instantiatied. Entering initial state 'PowerOnSelfTest. " << std::endl;

	this->ChangeState(PowerOnSelfTest::Instance());
	Name_ = name;
	VersionNo_ = versNo;
}


void EmbeddedSystemX::SelfTestOk(){
	state_->SelfTestOk(this);
}

void EmbeddedSystemX::Initialized(){
	state_->Initialized(this);
}

void EmbeddedSystemX::Restart(){
	state_->Restart(this);
}
void EmbeddedSystemX::Configure(){
	state_->Configure(this);
}
void EmbeddedSystemX::ConfigurationEnded(){
	state_->ConfigurationEnded(this);
}
void EmbeddedSystemX::Exit(){
	state_->Exit(this);
}
void EmbeddedSystemX::Stop(){
	state_->Stop(this);
}
void EmbeddedSystemX::Start(){
	state_->Start(this);
}
void EmbeddedSystemX::Suspend(){
	state_->Suspend(this);
}
void EmbeddedSystemX::Resume(){
	state_->Resume(this);
}
void EmbeddedSystemX::SelfTestFailed(int ErrorNo){
	state_->SelfTestFailed(this, ErrorNo);
}
void EmbeddedSystemX::ConfigX(){
	state_->ConfigX(this);
}
void EmbeddedSystemX::chMode(){
	state_->chMode(this);
}
void EmbeddedSystemX::eventX(){
	state_->eventX(this);
}
void EmbeddedSystemX::eventY(){
	state_->eventY(this);
}

void EmbeddedSystemX::Simulate(){
	state_->Simulate(this);
}

void EmbeddedSystemX::RunRealTime(){
	state_->RunRealTime(this);
}

void EmbeddedSystemX::ChangeState(State* s){
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
