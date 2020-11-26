#pragma once
#include "State.h"
#include "EmbeddedSystemX.h"
//#include "RealTimeLoop.h"		// for calling it's subfunctions


class Operational : public State {
public:
	// Global
	virtual void Restart(EmbeddedSystemX*);
};


class Ready : public Operational
{
public:
	static State* Instance();

	const char* stateName();
	void Configure(EmbeddedSystemX*) override;
	void Start(EmbeddedSystemX*) override;

private:
	static State* inst_;
};


class Configuration : public Operational
{
public:
	static State* Instance();

	void EntryAction(EmbeddedSystemX*);
	const char* stateName();

	// Events
	void ConfigurationEnded(EmbeddedSystemX*) override;
	void ConfigX(EmbeddedSystemX*) override;
	void Configure(EmbeddedSystemX*) override;

	// Internal functions
	static void ReadConfigurationInfo();
	static void PerformConfigurationX();

private:
	static State* inst_;
};


class Suspended : public Operational
{
public:

	static State* Instance();

	const char* stateName();
	void Stop(EmbeddedSystemX*) override;
	void Resume(EmbeddedSystemX*) override;

private:
	static State* inst_;
};