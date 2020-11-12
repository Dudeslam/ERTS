#include "ConcreteStates.h"


//mode1 functions

State* Mode1::inst_ = 0;

State* Mode1::Instance()
{
	if (inst_ == 0) {
		inst_ = new Mode1;
	}
	return inst_;
}

void Mode1::EntryAction(EmbeddedSystemX* ctx)
{
	this->eventX(ctx);
}

const char* Mode1::stateName()
{
	return "Mode1";
}

void Mode1::chMode(EmbeddedSystemX* ctx)
{
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode2::Instance());
}

void Mode1::Stop(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, Ready::Instance());
}

void Mode1::Suspend(EmbeddedSystemX* ctx)
{
	std::cout << "Suspending real time loop" << std::endl;
	ChangeState(ctx, Suspended::Instance());
}

void Mode1::eventX(EmbeddedSystemX* ctx)
{
	std::cout << "Got event X" << std::endl;
	this->responseM1eventX();
	std::cout << " To chance mode type: C, to restart type: R, to suspend type: P, to stop type: S" << std::endl;
	char field =0;
	std::cin >> field;

	switch (field)
	{
	case 'C':
		chMode(ctx);
		break;
	case 'R':
		std::cout << "System Restarting" << std::endl;
		Restart(ctx);
		break;
	case 'P':
		Suspend(ctx);
		break;
	case 'S':
		Stop(ctx);
		break;
	default:
		eventX(ctx);
		break;
	}

}

void Mode1::Restart(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, PowerOnSelfTest::Instance());
}

void Mode1::responseM1eventX()
{
	std::cout << "Responding to event X in Mode 1" << std::endl;
	Sleep(100);
}


//mode2 functions
State* Mode2::inst_ = 0;

State* Mode2::Instance()
{
	if (inst_ == 0) {
		inst_ = new Mode2;
	}
	return inst_;
}

void Mode2::EntryAction(EmbeddedSystemX* ctx)
{
	std::cout << "For simulation purposes, choose event action: Y/X"<< std::endl;
	char field;
	std::cin >> field;
	switch (field)
	{
	case 'Y':
		this->eventY(ctx);
		break;
	case 'X':
		this->eventX(ctx);
		break;
	default:
		this->EntryAction(ctx);
		break;
	}

}

const char* Mode2::stateName()
{
	return "Mode2";
}

void Mode2::chMode(EmbeddedSystemX* ctx)
{
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode3::Instance());
}

void Mode2::Stop(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, Ready::Instance());
}

void Mode2::Suspend(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, Suspended::Instance());
}

void Mode2::eventY(EmbeddedSystemX* ctx)
{
	std::cout << "Got event Y" << std::endl;
	this->responseM2eventY();
	std::cout << " To chance mode type: C, to restart type: R, to suspend type: P, to stop type: S" << std::endl;
	char field = 0;
	std::cin >> field;

	switch (field)
	{
	case 'C':
		chMode(ctx);
		break;
	case 'R':
		std::cout << "System Restarting" << std::endl;
		Restart(ctx);
		break;
	case 'P':
		Suspend(ctx);
		break;
	case 'S':
		Stop(ctx);
		break;
	default:
		eventY(ctx);
		break;
	}

}

void Mode2::eventX(EmbeddedSystemX* ctx)
{
	std::cout << "Got event X" << std::endl;
	this->responseM2eventX();
	std::cout << " To chance mode type: C, to restart type: R, to suspend type: P, to stop type: S" << std::endl;
	char field = 0;
	std::cin >> field;

	switch (field)
	{
	case 'C':
		chMode(ctx);
		break;
	case 'R':
		std::cout << "System Restarting" << std::endl;
		Restart(ctx);
		break;
	case 'P':
		Suspend(ctx);
		break;
	case 'S':
		Stop(ctx);
		break;
	default:
		eventX(ctx);
		break;
	}
}

void Mode2::Restart(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, PowerOnSelfTest::Instance());
}

void Mode2::responseM2eventX()
{
	std::cout << "Responding to event X in Mode 2" << std::endl;
}

void Mode2::responseM2eventY()
{
	std::cout << "Responding to event Y in Mode 2" << std::endl;
}


//mode3 functions
State* Mode3::inst_ = 0;

State* Mode3::Instance()
{
	if (inst_ == 0) {
		inst_ = new Mode3;
	}
	return inst_;
}

const char* Mode3::stateName()
{
	return "Mode3";
}
void Mode3::EntryAction(EmbeddedSystemX* ctx)
{
	this->eventX(ctx);
}
void Mode3::chMode(EmbeddedSystemX* ctx)
{
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode1::Instance());
}

void Mode3::Stop(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, Ready::Instance());
}

void Mode3::Suspend(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, Suspended::Instance());
}

void Mode3::eventX(EmbeddedSystemX* ctx)
{
	std::cout << "Got event X" << std::endl;
	this->responseM3eventX();
	std::cout << " To chance mode type: C, to restart type: R, to suspend type: P, to stop type: S" << std::endl;
	char field = 0;
	std::cin >> field;

	switch (field)
	{
	case 'C':
		chMode(ctx);
		break;
	case 'R':
		std::cout << "System Restarting" << std::endl;
		Restart(ctx);
		break;
	case 'P':
		Suspend(ctx);
		break;
	case 'S':
		Stop(ctx);
		break;
	default:
		eventX(ctx);
		break;
	}
}

void Mode3::Restart(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, PowerOnSelfTest::Instance());
}

void Mode3::responseM3eventX()
{
	std::cout << "Responding to event X in Mode 3" << std::endl;
}


//config Functions
State* Configuration::inst_ = 0;

State* Configuration::Instance()
{
	if (inst_ == 0) {
		inst_ = new Configuration;
	}
	return inst_;
}

void Configuration::EntryAction(EmbeddedSystemX* ctx)
{
	ReadConfigurationInfo();
	PerformConfigurationX();
	this->Configure(ctx);
}

const char* Configuration::stateName()
{
	return "Configuration";
}

void Configuration::ConfigurationEnded(EmbeddedSystemX* ctx)
{
	std::cout << "Finished applying configuration" << std::endl;
	ChangeState(ctx, Ready::Instance());
}

void Configuration::ConfigX(EmbeddedSystemX* ctx)
{
	this->PerformConfigurationX();
}

void Configuration::Configure(EmbeddedSystemX* ctx)
{
	std::cout << "Applying Configuration" << std::endl;
	this->ConfigurationEnded(ctx);
}

void Configuration::Restart(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, PowerOnSelfTest::Instance());
}

void Configuration::ReadConfigurationInfo()
{
	std::cout << "Reading configurations" << std::endl;
}

void Configuration::PerformConfigurationX()
{
	std::cout << "Performing Configuration X" << std::endl;
}


//failure functions

State* Failure::inst_ = 0;

State* Failure::Instance()
{
	if (inst_ == 0) {
		inst_ = new Failure;
	}
	return inst_;
}

void Failure::EntryAction(EmbeddedSystemX* ctx)
{
	this->display(ctx, 1);
}

const char* Failure::stateName()
{
	return "Failure";
}

void Failure::display(EmbeddedSystemX* ctx, int ErrorNo)
{
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

void Failure::Exit(EmbeddedSystemX* ctx)
{
	std::cout << "Exiting program" << std::endl;
	Sleep(500);
	exit(0);
}

void Failure::Restart(EmbeddedSystemX* ctx)
{
	std::cout << "Restarting program" << std::endl;
	ChangeState(ctx, PowerOnSelfTest::Instance());
}


//Suspended functions

State* Suspended::inst_ = 0;

State* Suspended::Instance()
{
	if (inst_ == 0) {
		inst_ = new Suspended;
	}
	return inst_;
}

void Suspended::EntryAction(EmbeddedSystemX* ctx)
{
	//None
	std::cout << "For simulation purposes, choose your action" << std::endl;
	std::cout << "To stop type: S, to resume type: M, to restart type: R " << std::endl;
	char field;
	std::cin >> field;
	switch (field)
	{
	case 'S':
		this->Stop(ctx);
		break;
	case 'M':
		this->Resume(ctx);
		break;
	case 'R':
		this->Restart(ctx);
		break;
	default:
		this->EntryAction(ctx);
		break;
	}
}

const char* Suspended::stateName()
{
	return "Suspended";
}

void Suspended::Stop(EmbeddedSystemX* ctx)
{
	std::cout << "Stopped Real Time loop" << std::endl;
	ChangeState(ctx, Ready::Instance());
}

void Suspended::Resume(EmbeddedSystemX* ctx)
{
	std::cout << "Resuming Real Time loop" << std::endl;
	ChangeState(ctx, Mode1::Instance());
}

void Suspended::Restart(EmbeddedSystemX* ctx)
{
	std::cout << "Restarting System" << std::endl;
	ChangeState(ctx, PowerOnSelfTest::Instance());
}


//ready functions
State* Ready::inst_ = 0;

State* Ready::Instance()
{
	if (inst_ == 0) {
		inst_ = new Ready;
	}
	return inst_;
}

const char* Ready::stateName()
{
	return "Ready";
}

void Ready::EntryAction(EmbeddedSystemX* ctx)
{
	this->Configure(ctx);
}

void Ready::Configure(EmbeddedSystemX* ctx)
{
	std::cout << "Do you wish to configure? y/n" << std::endl;
	char field;
	std::cin >> field;
	switch (field)
	{
	case 'y':
		std::cout << "System will now apply configuration" << std::endl;
		ChangeState(ctx, Configuration::Instance());
		break;
	case 'n':
		std::cout << "System will now proceed to real time loop" << std::endl;
		this->Start(ctx);
		break;
	}
	std::cout << field << std::endl;	
}

void Ready::Start(EmbeddedSystemX* ctx)
{
	std::cout << "Running Real Time Loop" << std::endl;
	ChangeState(ctx, Mode1::Instance());
}

void Ready::Restart(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, PowerOnSelfTest::Instance());
}


//init functions
State* Initializing::inst_ = 0;

State* Initializing::Instance()
{
	if (inst_ == 0) {
		inst_ = new Initializing;
	}
	return inst_;
}

void Initializing::EntryAction(EmbeddedSystemX* ctx)
{
	this->startInitializing(ctx);
}

const char* Initializing::stateName()
{
	return "Initializing";
}

void Initializing::startInitializing(EmbeddedSystemX* ctx)
{
	std::cout << "Starting Initialization" << std::endl;
	this->Initialized(ctx);
}

void Initializing::Initialized(EmbeddedSystemX* ctx)
{
	std::cout << "Initialization complete" << std::endl;
	ChangeState(ctx, Ready::Instance());
}


//poweronselftest functions
State* PowerOnSelfTest::inst_ = 0;

State* PowerOnSelfTest::Instance()
{
	if (inst_ == 0) {
		inst_ = new PowerOnSelfTest;
	}
	return inst_;
}

void PowerOnSelfTest::EntryAction(EmbeddedSystemX* ctx)
{
	this->SystemSelfTest(ctx);
}

const char* PowerOnSelfTest::stateName()
{
	return "PowerOnSelfTest";
}

void PowerOnSelfTest::SystemSelfTest(EmbeddedSystemX* ctx)
{
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

void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* ctx)
{
	ChangeState(ctx, Initializing::Instance());
}

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* ctx, int ErrorNo)
{
	std::cout << "Self Test failed" << std::endl;
	ChangeState(ctx, Failure::Instance());
}
