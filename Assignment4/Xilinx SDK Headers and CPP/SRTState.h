#pragma once

//#include "SimulateRealTimeState.h"
class SimulateRealTimeState;

class SRTState {
public:


	virtual void RunRealTime(SimulateRealTimeState*);
	virtual void Simulate(SimulateRealTimeState*);
	virtual void Stop(SimulateRealTimeState*);
	virtual void Suspend(SimulateRealTimeState*);

	virtual void EntryAction(SimulateRealTimeState*);
	virtual const char* stateName(){ return "None";}
protected:
	 void ChangeState(SimulateRealTimeState* t, SRTState* s);
};


