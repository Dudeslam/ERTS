#include "ConcreteStates.h"


//mode1 functions
Mode1::Mode1() : State("Mode1")
{

}

void Mode1::chMode(EmbeddedSystemX* ctx)
{
	std::cout << "Changing mode" << std::endl;
	ctx->ChangeState(Mode2::Instance());
}

void Mode1::Stop(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Ready::Instance());
}

void Mode1::Suspend(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Suspended::Instance());
}

void Mode1::eventX(EmbeddedSystemX*)
{
	std::cout << "Performing Event X" << std::endl;
}

void Mode1::Restart(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(PowerOnSelfTest::Instance());
}




//mode2 functions
Mode2::Mode2() : State("Mode2")
{
	
}
void Mode2::chMode(EmbeddedSystemX* ctx)
{
	std::cout << "Changing mode" << std::endl;
	ctx->ChangeState(Mode3::Instance());
}

void Mode2::Stop(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Ready::Instance());
}

void Mode2::Suspend(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Suspended::Instance());
}

void Mode2::eventY(EmbeddedSystemX*)
{
	std::cout << "Performing Event Y" << std::endl;
}

void Mode2::eventX(EmbeddedSystemX*)
{
	std::cout << "Performing Event X" << std::endl;
}

void Mode2::Restart(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(PowerOnSelfTest::Instance());
}


//mode3 functions
Mode3::Mode3() : State("Mode2")
{
	
	
}
void Mode3::chMode(EmbeddedSystemX* ctx)
{
	std::cout << "Changing mode" << std::endl;
	ctx->ChangeState(Mode1::Instance());
}

void Mode3::Stop(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Ready::Instance());
}

void Mode3::Suspend(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Suspended::Instance());
}

void Mode3::eventX(EmbeddedSystemX*)
{
	std::cout << "Performing Event X" << std::endl;
}

void Mode3::Restart(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(PowerOnSelfTest::Instance());
}


//config Functions
Configuration::Configuration() : State("Configuration")
{

}
void Configuration::ConfigurationEnded(EmbeddedSystemX* ctx)
{
	std::cout << "Finished applying configuration" << std::endl;
	ctx->ChangeState(Ready::Instance());
}

void Configuration::ConfigX(EmbeddedSystemX* ctx)
{
	ReadConfigurationInfo();
	Configure(ctx);
}

void Configuration::Configure(EmbeddedSystemX* ctx)
{
	std::cout << "Applying Configuration" << std::endl;
	ConfigurationEnded(ctx);
}

void Configuration::ReadConfigurationInfo()
{
	std::cout << "Reading configurations" << std::endl;
}

void Configuration::Restart(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(PowerOnSelfTest::Instance());
}


//failure functions
Failure::Failure() : State("Failure")
{

}
void Failure::display(EmbeddedSystemX* ctx, int ErrorNo)
{
	std::cout << "Power On Self test failed with: E#" << errno << std::endl;
	std::cout << "Do you wish to restart y/n" << std::endl;
	char field;
	field = std::cin.get();
	switch (field)
	{
	case 'y':
		std::cout << "Will now restart SelfTest" << std::endl;
		Restart(ctx);
	case 'n':
		std::cout << "Application failed, will now exit" << std::endl;
		Exit(ctx);
	}

}

void Failure::Exit(EmbeddedSystemX* ctx)
{
	std::cout << "Exiting program" << std::endl;
	exit(0);
}

void Failure::Restart(EmbeddedSystemX* ctx)
{
	std::cout << "Restarting program" << std::endl;
	ctx->ChangeState(PowerOnSelfTest::Instance());
}


Suspended::Suspended() : State("Suspended")
{
}

//failure functions
void Suspended::Stop(EmbeddedSystemX* ctx)
{
	std::cout << "Stopped Real Time loop" << std::endl;
	ctx->ChangeState(Ready::Instance());
}

void Suspended::Resume(EmbeddedSystemX* ctx)
{

	ctx->ChangeState(Mode1::Instance());
}

void Suspended::Restart(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(PowerOnSelfTest::Instance());
}


//ready functions
Ready::Ready() : State("Ready")
{

}
void Ready::Configure(EmbeddedSystemX* ctx)
{
	std::cout << "Configuring" << std::endl;
	ctx->ChangeState(Configuration::Instance());
}

void Ready::Start(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Mode1::Instance());
}

void Ready::Restart(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(PowerOnSelfTest::Instance());
}


//init functions
Initializing::Initializing() : State("Initializing")
{

}
void Initializing::startInitializing(EmbeddedSystemX* ctx)
{
	std::cout << "Starting Initialization" << std::endl;
	Initialized(ctx);
}

void Initializing::Initialized(EmbeddedSystemX* ctx)
{
	std::cout << "Initialization complete, proceeding to operation" << std::endl;
	ctx->ChangeState(Ready::Instance());
}


//poweronselftest functions
PowerOnSelfTest::PowerOnSelfTest() : State("PowerOnSelfTest")
{

}
void PowerOnSelfTest::SystemSelfTest(EmbeddedSystemX* ctx)
{
	std::cout << "System Self test running " << std::endl;
	std::cout << "For simulation purposes, should the self test fail, y/n" << std::endl;
	char field;
	field = std::cin.get();
	switch (field)
	{
	case 'y':
		SelfTestFailed(ctx, 1);
	case 'n':
		SelfTestOk(ctx);
	}
	
}

void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* ctx)
{
	ctx->ChangeState(Initializing::Instance());
}

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* ctx, int ErrorNo)
{
	std::cout << "Self Test failed" << std::endl;
	State* state = Failure::Instance();
	state->setErrNo(ErrorNo);
	ctx->ChangeState(Failure::Instance());

}
