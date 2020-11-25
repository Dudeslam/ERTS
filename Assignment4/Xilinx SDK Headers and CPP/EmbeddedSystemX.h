#ifndef EMBEDDEDSYSTEMX_H_
#define EMBEDDEDSYSTEMX_H_
//#include "State.h"
//#include "ConcreteStates.h"
#include <stdlib.h>

class State;

class EmbeddedSystemX {
public:
	EmbeddedSystemX(const char* name, int versNo);

	void SelfTestOk();
	void Initialized();
	void Restart();
	void Configure();
	void ConfigurationEnded();
	void Exit();
	void Stop();
	void Start();
	void Suspend();
	void Resume();
	void SelfTestFailed(int ErrorNo);
	void ConfigX();
	void chMode();
	void eventX();
	void eventY();
	void Simulate();
	void RunRealTime();
	void ChangeState(State* s);

protected:
  friend class State;

private:
  State* state_;
	int VersionNo_;
	const char* Name_;
	EmbeddedSystemX* ctx_;
};

#endif /* EMBEDDEDSYSTEMX_H_ */
