#include "Operational.h"
#include "ConcreteStates.h"
#include "RealTimeLoop.h"
#include <iostream>
#include <windows.h>	// for sleep


// Implementation Operational
void Operational::Restart(EmbeddedSystemX* ctx) {
	std::cout << "Restarting system" << std::endl;
	ChangeState(ctx, PowerOnSelfTest::Instance());
}

//ready functions
State* Ready::inst_ = 0;

State* Ready::Instance(){
	if (inst_ == 0) {
		inst_ = new Ready;
	}
	return inst_;
}

const char* Ready::stateName(){
	return "Ready";
}

void Ready::Configure(EmbeddedSystemX* ctx){
	ChangeState(ctx, Configuration::Instance());
}

void Ready::Start(EmbeddedSystemX* ctx){
	std::cout << "Running Real Time Loop" << std::endl;
	ChangeState(ctx, RealTimeLoop::Instance());
}


//config Functions
State* Configuration::inst_ = 0;

State* Configuration::Instance(){
	if (inst_ == 0) {
		inst_ = new Configuration;
	}
	return inst_;
}

void Configuration::EntryAction(EmbeddedSystemX* ctx){
	ReadConfigurationInfo();
}

const char* Configuration::stateName(){
	return "Configuration";
}

void Configuration::ConfigurationEnded(EmbeddedSystemX* ctx){
	std::cout << "Finished applying configuration" << std::endl;
	ChangeState(ctx, Ready::Instance());
}

void Configuration::ConfigX(EmbeddedSystemX* ctx){
	this->PerformConfigurationX();
	this->ConfigurationEnded(ctx);
}

void Configuration::Configure(EmbeddedSystemX* ctx){
	std::cout << "Applying Configuration" << std::endl;
	this->ConfigurationEnded(ctx);
}

void Configuration::ReadConfigurationInfo(){
	std::cout << "Reading configurations" << std::endl;
}

void Configuration::PerformConfigurationX(){
	std::cout << "Performing Configuration X" << std::endl;
}


//Suspended functions
State* Suspended::inst_ = 0;

State* Suspended::Instance(){
	if (inst_ == 0) {
		inst_ = new Suspended;
	}
	return inst_;
}

const char* Suspended::stateName(){
	return "Suspended";
}

void Suspended::Stop(EmbeddedSystemX* ctx){
	std::cout << "Stopped Real Time loop" << std::endl;
	ChangeState(ctx, Ready::Instance());
}

void Suspended::Resume(EmbeddedSystemX* ctx){
	std::cout << "Resuming Real Time loop" << std::endl;
	ChangeState(ctx, RealTimeLoop::Instance());
}