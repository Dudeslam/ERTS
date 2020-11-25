#pragma once
#include "State.h"
#include "EmbeddedSystemX.h"
#include "operational.h"
#include "SimulateRealTimeState.h"



class RealTimeLoop : public Operational {
public:
	// Global

	virtual void Stop(EmbeddedSystemX*);
	virtual void Suspend(EmbeddedSystemX*);

	// Subfunctions
	virtual void chMode(EmbeddedSystemX*) {};
	virtual void eventX(EmbeddedSystemX*) {};
	virtual void eventY(EmbeddedSystemX*) {};

	virtual void RunRealTime(EmbeddedSystemX*) {};
	virtual void Simulate(EmbeddedSystemX*) {};

	virtual void EntryAction(EmbeddedSystemX*) {};
	virtual const char* stateName() { return "None"; };

protected:
	void ChangeState(EmbeddedSystemX* t, State* s) { t->ChangeState(s); };
};




class Mode1 : public RealTimeLoop
{
public:

	static State* Instance();

	const char* stateName();
	void chMode(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;

	static void responseM1eventX();

private:
	static State* inst_;
};



class Mode2 : public RealTimeLoop
{
public:
	static State* Instance();

	//void EntryAction(EmbeddedSystemX*);
	const char* stateName();
	void chMode(EmbeddedSystemX*) override;
	void eventY(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;

	static void responseM2eventX();
	static void responseM2eventY();

private:
	static State* inst_;
};



class Mode3 : public RealTimeLoop
{
public:
	static State* Instance();

	//void EntryAction(EmbeddedSystemX*);

	const char* stateName();
	void chMode(EmbeddedSystemX*) override;
	void eventX(EmbeddedSystemX*) override;

	static void responseM3eventX();

private:
	static State* inst_;
};


class Simulation : public SRTState
{
	static SRTState* Instance();
	void RunRealTime(SimulateRealTimeState*) override;
	void Stop(SimulateRealTimeState*) override;
	void Suspend(SimulateRealTimeState*) override;
private:
	static SRTState* inst_;

};


class RealTimeExecution : public SRTState
{
	static SRTState* Instance();
	void Simulate(SimulateRealTimeState*) override;
	void Stop(SimulateRealTimeState*) override;
	void Suspend(SimulateRealTimeState*) override;
private:
	static SRTState* inst_;

};
