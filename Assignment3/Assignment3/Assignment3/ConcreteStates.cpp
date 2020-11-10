#include "ConcreteStates.h"
#include <WinUser.h>

//mode1 functions
Mode1::Mode1() : State("Mode1")
{

}

void Mode1::chMode(EmbeddedSystemX*)
{

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
void Mode2::chMode(EmbeddedSystemX*)
{
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
void Mode3::chMode(EmbeddedSystemX*)
{
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
void Configuration::ConfigurationEnded(EmbeddedSystemX*)
{
}

void Configuration::ConfigX(EmbeddedSystemX*)
{
}

void Configuration::ReadConfigurationInfo()
{
}

void Configuration::Restart(EmbeddedSystemX*)
{
}


//failure functions
void Failure::display(EmbeddedSystemX* ctx, int ErrorNo)
{
	std::cout << "Power On Self test failed with: E#" << errno << std::endl;
	std::cout << "Do you wish to restart?" << std::endl;
	std::cout << "y/n" << std::endl;
	char keystroke = std::cin.get();
	switch (keystroke)
	{
	case 'y':
		ctx->Restart();
		break;
	case 'n':
		ctx->Exit();
	default:
		std::cout << "Do you wish to restart?" << std::endl;
		std::cout << "y/n" << std::endl;
		break;
	}
}

void Failure::Exit(EmbeddedSystemX*)
{

}

void Failure::Restart(EmbeddedSystemX*)
{
}


//failure functions
void Suspended::Stop(EmbeddedSystemX*)
{
}

void Suspended::Resume(EmbeddedSystemX*)
{
}

void Suspended::Restart(EmbeddedSystemX*)
{
}


//ready functions
void Ready::Configure(EmbeddedSystemX*)
{
}

void Ready::Start(EmbeddedSystemX*)
{
}

void Ready::Restart(EmbeddedSystemX*)
{
}


//init functions
void Initializing::startInitializing()
{
}

void Initializing::Initialized(EmbeddedSystemX*)
{
}


//poweronselftest functions
void PowerOnSelfTest::SystemSelfTest()
{
	std::cout << "System Self test running " << std::endl;
}

void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX*)
{
}

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX*, int ErrorNo)
{
	State* state;
	state->setErrNo(ErrorNo);


}
