#ifndef SRC_SIMULATEREALTIMESTACE_H_
#define SRC_SIMULATEREALTIMESTACE_H_

#include <iostream>
#include <stdlib.h>
#include "SRTState.h"

class SRTState;

class SimulateRealTimeState
{
public:
	SimulateRealTimeState(char name);

	void RunRealTime();
	void Simulate();


	void ChangeState(SRTState* s);
protected:
	friend class SRTState;

private:
	char name_;
	SRTState* state_;
};
#endif /* SRC_SIMULATEREALTIMESTACE_H_ */
