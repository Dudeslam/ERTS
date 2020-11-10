#pragma once

#include "State.h"
#include "EmbeddedSystemX.h"

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
	Configuration();
	static State* Instance()
	{
		static Configuration instance;
		return &instance;
	}

	void ConfigurationEnded(EmbeddedSystemX*) override;
	void ConfigX(EmbeddedSystemX*) override;
	void ReadConfigurationInfo();
	void Restart(EmbeddedSystemX*) override;
};


class Failure : public State
{
public:
	Failure();

	static State* Instance()
	{
		static Failure instance;
		return &instance;
	}
	static State* Instance();
	void display(EmbeddedSystemX* ,int ErrorNo);
	void Exit(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Suspended : public State
{
public:
	Suspended();

	static State* Instance()
	{
		static Failure instance;
		return &instance;
	}

	void Stop(EmbeddedSystemX*) override;
	void Resume(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Ready : public State
{
public:
	Ready();

	static State* Instance()
	{
		static Ready instance;
		return &instance;
	}

	void Configure(EmbeddedSystemX*) override;
	void Start(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
};

class Initializing : public State
{
public:
	Initializing();
	static State* Instance()
	{
		static Initializing instance;
		return &instance;
	}

	void startInitializing(EmbeddedSystemX*);
	void Initialized(EmbeddedSystemX*) override;

};

class PowerOnSelfTest : public State
{
public:
	PowerOnSelfTest();
	static State* Instance()
	{
		static PowerOnSelfTest instance;
		return &instance;
	}

	void SystemSelfTest(EmbeddedSystemX*);
	void SelfTestOk(EmbeddedSystemX*) override;
	void SelfTestFailed(EmbeddedSystemX*, int ErrorNo) override;
};
