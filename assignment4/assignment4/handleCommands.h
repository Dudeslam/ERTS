#pragma once
#include "EmbeddedSystemX.h"
#include <string>


class handleCommands
{
public:
	handleCommands()
		: emx_(new EmbeddedSystemX("SYS", 1)) {
		std::cout << __FUNCTION__ << std::endl;
	};

	~handleCommands() {
		//std::cout << __FUNCTION__ << std::endl;
	};

	// Handle every command = map to STM
	void cmdSelfTestOk() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->SelfTestOk();
	};

	void cmdInitialized() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Initialized();
	};

	void cmdRestart() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Restart();
	};

	void cmdConfigure() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Configure();
	};

	void cmdConfigurationEnded() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->ConfigurationEnded();
	};

	void cmdExit() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Exit();
	};

	void cmdStop() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Stop();
	};

	void cmdStart() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Start();
	};

	void cmdSuspend() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Suspend();
	};

	void cmdResume() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Resume();
	};

	void cmdSelfTestFailed() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->SelfTestFailed(1);
	};

	void cmdConfigX() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->ConfigX();
	};

	void cmdChMode() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->chMode();
	};

	void cmdEventX() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->eventX();
	};
	
	void cmdEventY() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->eventY();
	};

	void cmdSimulate() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->Simulate();
	};

	void cmdRunRealTime() {
		std::cout << __FUNCTION__ << std::endl;
		emx_->RunRealTime();
	};
	
private:
	EmbeddedSystemX* emx_;
};
