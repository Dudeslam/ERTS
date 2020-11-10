#ifndef EMBEDDEDSYSTEMX_H_
#define EMBEDDEDSYSTEMX_H_
#include "State.h"
#include "ConcreteStates.h"
#include <stdlib.h>

class State;

class EmbeddedSystemX {
public:
	EmbeddedSystemX(char* name, int versNo)
	{
		Name_ = name;
		VersionNo_ = versNo;
		ctx_ = new EmbeddedSystemX();
  }

	void SelfTestOk();
	void Initialized();
	void Restart();
	void Configure();
	void ConfigurationEnded();
	void Exit() { 
		exit(0);
	};
	void Stop();
	void Start();
	void Suspend();
	void Resume();
	void SelfTestFailed(int ErrorNo);
	void ConfigX();
	void chMode();
	void eventX();
	void eventY();
	void ChangeState(State* s)
	{
		//only prints leaving state if it is in a state, otherwise it only enters a state
		if (state_ != 0)
		{
			std::cout << "Leaving state: " << state_->getName() << std::endl;
		}
		state_ = s;
		std::cout << "Entering state: " << state_->getName() << std::endl;
		this->state_->setContext(this);
	}

protected:
  friend class State;

  EmbeddedSystemX(State* state) : state_(nullptr)
  {
	  //print and set function for transitioning states
	  this->ChangeState(state);
  }

private:
  State* state_;
	int VersionNo_;
	char* Name_;
	EmbeddedSystemX* ctx_;
};

#endif /* EMBEDDEDSYSTEMX_H_ */