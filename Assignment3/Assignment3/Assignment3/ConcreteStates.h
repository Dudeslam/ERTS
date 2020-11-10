#pragma once

#include "State.h"

class Mode1 : public State
{
public:
	Mode1();

	static State* Instance()
	{
		static Mode1 instance;
		return &instance;
	}

	void chMode(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
};

class Mode2 : public State
{
public:
	Mode2();
	static State* Instance()
	{
		static Mode2 instance;
		return &instance;
	}

	void chMode(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void eventY(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Mode3 : public State
{
public:
	Mode3();
	static State* Instance()
	{
		static Mode3 instance;
		return &instance;
	}

	void chMode(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Configuration : public State
{
public:
	static State* Instance();

	void ConfigurationEnded(EmbeddedSystemX*) override;
	void ConfigX(EmbeddedSystemX*) override;
	void ReadConfigurationInfo();
	void Restart(EmbeddedSystemX*) override;
};


class Failure : public State
{
public:
	static State* Instance();
	void display(EmbeddedSystemX* ,int ErrorNo);
	void Exit(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Suspended : public State
{
public:
	static State* Instance();

	void Stop(EmbeddedSystemX*) override;
	void Resume(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Ready : public State
{
public:
	static State* Instance();

	void Configure(EmbeddedSystemX*) override;
	void Start(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Initializing : public State
{
public:
	static State* Instance();

	void startInitializing();
	void Initialized(EmbeddedSystemX*) override;

};

class PowerOnSelfTest : public State
{
public:
	static State* Instance();

	void SystemSelfTest();
	void SelfTestOk(EmbeddedSystemX*) override;
	void SelfTestFailed(EmbeddedSystemX*, int ErrorNo) override;
};
