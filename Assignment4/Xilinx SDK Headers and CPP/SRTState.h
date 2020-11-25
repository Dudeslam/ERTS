#pragma once

//#include "SimulateRealTimeState.h"
class SimulateRealTimeState;

class SRTState {
public:
	SRTState();
	virtual void RunRealTime(SimulateRealTimeState*);
	virtual void Simulate(SimulateRealTimeState*);
	virtual const char* stateName(){ return "None";}
	virtual void EntryAction(SimulateRealTimeState*);
protected:
	 void ChangeState(SimulateRealTimeState* t, SRTState* s);
};


