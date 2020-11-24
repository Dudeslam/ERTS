#pragma once
#include "State.h"
#include "EmbeddedSystemX.h"



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



