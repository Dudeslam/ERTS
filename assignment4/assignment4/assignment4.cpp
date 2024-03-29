// assignment4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stmTest.h"

#include "ICommands.h"
#include "invoker.h"
#include "handleCommands.h"
#include <Windows.h>


int main()
{
	//test();
	handleCommands* cmdReceiver = new handleCommands();
	Invoker invoker;

	auto cmdConfigure			= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdConfigure);
	auto cmdConfigurationEnded	= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdConfigurationEnded);
	auto cmdStart				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdStart);
	auto cmdEventX				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdEventX);
	auto cmdChMode				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdChMode);
	auto cmdEventY				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdEventY);
	auto cmdSuspend				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdSuspend);
	auto cmdResume				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdResume);
	auto cmdStop				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdStop);
	auto cmdRestart				= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdRestart);
	auto cmdSimulate		= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdSimulate);
	auto cmdRunRealTime		= CommandBasic<handleCommands>(cmdReceiver, &handleCommands::cmdRunRealTime);


	// additional states are run manually (y/n)
	
	// Operational
	invoker.addCommand(&cmdConfigure);
	invoker.addCommand(&cmdConfigurationEnded);
	invoker.addCommand(&cmdStart);
	// Real time loop
	invoker.addCommand(&cmdSimulate);
	invoker.addCommand(&cmdEventX);
	invoker.addCommand(&cmdRunRealTime);
	invoker.addCommand(&cmdSimulate);
	invoker.addCommand(&cmdChMode);
	invoker.addCommand(&cmdRunRealTime);
	invoker.addCommand(&cmdSimulate);
	invoker.addCommand(&cmdEventX);
	invoker.addCommand(&cmdRunRealTime);
	invoker.addCommand(&cmdSimulate);
	invoker.addCommand(&cmdEventY);
	invoker.addCommand(&cmdChMode);
	invoker.addCommand(&cmdEventX);
	invoker.addCommand(&cmdChMode);
	//Operational
	invoker.addCommand(&cmdSuspend);
	invoker.addCommand(&cmdResume);
	// Real time loop
	invoker.addCommand(&cmdChMode);
	// Operational
	invoker.addCommand(&cmdStop);
	invoker.addCommand(&cmdRestart);

	invoker.executeVectorOfCommands();

  std::cout << "DONE!\n"; 
}
