#pragma once

#include "State.h"
#include "EmbeddedSystemX.h"
#include <iostream>
#include <windows.h>

class Mode1 : public State
{
public:

	static State* Instance();
	void EntryAction(EmbeddedSystemX*);

	const char* stateName();
	void chMode(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;

	static void responseM1eventX();

private:
	static State* inst_;
};

class Mode2 : public State
{
public:
	static State* Instance();

	void EntryAction(EmbeddedSystemX*);
	const char* stateName();
	void chMode(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void eventY(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;

	static void responseM2eventX();
	static void responseM2eventY();

private:
	static State* inst_;
};

class Mode3 : public State
{
public:
	static State* Instance();

	void EntryAction(EmbeddedSystemX*);

	const char* stateName();
	void chMode(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;

	static void responseM3eventX();

private:
	static State* inst_;
};

class Configuration : public State
{
public:
	static State* Instance();

	void EntryAction(EmbeddedSystemX*);
	const char* stateName();

	// Events
	void ConfigurationEnded(EmbeddedSystemX*) override;
	void ConfigX(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	void Configure(EmbeddedSystemX*) override;

	// Internal functions
	static void ReadConfigurationInfo();
	static void PerformConfigurationX();

private:
	static State* inst_;
};


class Failure : public State
{
public:

	void EntryAction(EmbeddedSystemX*);
	const char* stateName();
	static State* Instance();
	void display(EmbeddedSystemX* ,int ErrorNo);
	void Exit(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;

private:
	static State* inst_;
};

class Suspended : public State
{
public:

	static State* Instance();

	void EntryAction(EmbeddedSystemX*);
	const char* stateName();
	void Stop(EmbeddedSystemX*) override;
	void Resume(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;

private:
	static State* inst_;
};

class Ready : public State
{
public:

	static State* Instance();

	void EntryAction(EmbeddedSystemX*);
	const char* stateName();
	void Configure(EmbeddedSystemX*) override;
	void Start(EmbeddedSystemX*) override;
	void Restart(EmbeddedSystemX*) override;
	
private:
	static State* inst_;
};

class Initializing : public State
{
public:
	static State* Instance();

	void EntryAction(EmbeddedSystemX*);
	const char* stateName();
	void startInitializing(EmbeddedSystemX*);
	void Initialized(EmbeddedSystemX*) override;

private:
	static State* inst_;
};

class PowerOnSelfTest : public State
{
public:
	static State* Instance();

	void EntryAction(EmbeddedSystemX*) override;
	const char* stateName() override;
	void SystemSelfTest(EmbeddedSystemX*);
	void SelfTestOk(EmbeddedSystemX*) override;
	void SelfTestFailed(EmbeddedSystemX*, int ErrorNo) override;

private:
	static State* inst_;
};
