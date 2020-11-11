#ifndef EMBEDDEDSYSTEMX_H_
#define EMBEDDEDSYSTEMX_H_
//#include "State.h"
//#include "ConcreteStates.h"
#include <stdlib.h>

class State;
class mode;

class EmbeddedSystemX {
public:
	EmbeddedSystemX(char* name, int versNo);

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
	void ChangeState(State* s);

protected:
  friend class State;

private:
  State* state_;
  mode* mode;
	int VersionNo_;
	char* Name_;
	EmbeddedSystemX* ctx_;
};

#endif /* EMBEDDEDSYSTEMX_H_ */