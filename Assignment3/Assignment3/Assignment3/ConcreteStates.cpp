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

void Mode1::Stop(EmbeddedSystemX*)
{

}

void Mode1::Suspend(EmbeddedSystemX*)
{

}

void Mode1::eventX(EmbeddedSystemX*)
{

}

void Mode1::Restart(EmbeddedSystemX*)
{

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

void Mode2::Stop(EmbeddedSystemX*)
{

}

void Mode2::Suspend(EmbeddedSystemX*)
{

}

void Mode2::eventY(EmbeddedSystemX*)
{

}

void Mode2::Restart(EmbeddedSystemX*)
{

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

void Mode3::Stop(EmbeddedSystemX*)
{

}

void Mode3::Suspend(EmbeddedSystemX*)
{

}

void Mode3::eventX(EmbeddedSystemX*)
{

}

void Mode3::Restart(EmbeddedSystemX*)
{

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

}

void Configuration::ReadConfigurationInfo()
{
	std::cout << "Reading configurations and applying" << std::endl;
}

void Configuration::Restart(EmbeddedSystemX*)
{

}


//failure functions
Failure::Failure() : State("Failure")
{

}
void Failure::display(EmbeddedSystemX* ctx, int ErrorNo)
{
	std::cout << "Power On Self test failed with: E#" << errno << std::endl;
	if (ErrorNo = 1)
	{
		std::cout << "Will now restart SelfTest" << std::endl;
		Restart(ctx);
	}
	else
	{
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

void Suspended::Resume(EmbeddedSystemX*)
{

}

void Suspended::Restart(EmbeddedSystemX*)
{
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
	//add 50/50 chance for selftestOk
	SelfTestOk(ctx);
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
