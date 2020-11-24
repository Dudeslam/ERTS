#include "ConcreteStates.h"
#include <iostream>
#include <sleep.h>	// for sleep
#include "operational.h"



//failure functions

State* Failure::inst_ = 0;

State* Failure::Instance(){
	if (inst_ == 0) {
		inst_ = new Failure;
	}
	return inst_;
}

void Failure::EntryAction(EmbeddedSystemX* ctx){
	this->display(ctx, 1);
}

const char* Failure::stateName(){
	return "Failure";
}

void Failure::display(EmbeddedSystemX* ctx, int ErrorNo){
	std::cout << "Power On Self test failed with: " << ErrorNo << std::endl;
	std::cout << "Do you wish to restart y/n" << std::endl;
	char field;
	std::cin >> field;
	switch (field)
	{
	case 'y':
		std::cout << "Will now restart SelfTest" << std::endl;
		this->Restart(ctx);
		break;
	case 'n':
		std::cout << "Application failed, will now exit" << std::endl;
		this->Exit(ctx);
		break;
	}
	std::cout << field << std::endl;
}

void Failure::Exit(EmbeddedSystemX* ctx){
	std::cout << "Exiting program" << std::endl;
	usleep(500);
	exit(0);
}

void Failure::Restart(EmbeddedSystemX* ctx){
	std::cout << "Restarting program" << std::endl;
	ChangeState(ctx, PowerOnSelfTest::Instance());
}








//init functions
State* Initializing::inst_ = 0;

State* Initializing::Instance(){
	if (inst_ == 0) {
		inst_ = new Initializing;
	}
	return inst_;
}

void Initializing::EntryAction(EmbeddedSystemX* ctx){
	this->startInitializing(ctx);
}

const char* Initializing::stateName(){
	return "Initializing";
}

void Initializing::startInitializing(EmbeddedSystemX* ctx){
	std::cout << "Starting Initialization" << std::endl;
	this->Initialized(ctx);
}

void Initializing::Initialized(EmbeddedSystemX* ctx){
	std::cout << "Initialization complete" << std::endl;
	ChangeState(ctx, Ready::Instance());
}


//poweronselftest functions
State* PowerOnSelfTest::inst_ = 0;

State* PowerOnSelfTest::Instance(){
	if (inst_ == 0) {
		inst_ = new PowerOnSelfTest;
	}
	return inst_;
}

void PowerOnSelfTest::EntryAction(EmbeddedSystemX* ctx){
	this->SystemSelfTest(ctx);
}

const char* PowerOnSelfTest::stateName(){
	return "PowerOnSelfTest";
}

void PowerOnSelfTest::SystemSelfTest(EmbeddedSystemX* ctx){
	std::cout << "System Self test running " << std::endl;
	std::cout << "For simulation purposes, should the self test pass, y/n" << std::endl;
	char field;
	std::cin >> field;
	switch (field)
	{
	case 'y':
		SelfTestOk(ctx);
		break;
	case 'n':
		SelfTestFailed(ctx, 1);
		break;
	}
	std::cin.clear();
}

void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* ctx){
	std::cout << "Self test succesful" << std::endl;
	ChangeState(ctx, Initializing::Instance());
}

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* ctx, int ErrorNo){
	std::cout << "Self Test failed" << std::endl;
	ChangeState(ctx, Failure::Instance());
}
