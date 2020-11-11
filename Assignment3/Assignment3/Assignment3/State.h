<<<<<<< HEAD
#ifndef STATE_H_
#define STATE_H_
#include <string>
#include <iostream>


class EmbeddedSystemX;

class State {
public:

	std::string name_;
	int ErrorNo_;

	std::string getName()
	{
		return name_;
	}

	void setContext(EmbeddedSystemX* ctx)
	{
		//sets the context of the state
		this->ctx_ = ctx;
	}

	void setErrNo(int errNo)
	{
		ErrorNo_ = errNo;
	}
	// Maybe instance?
  virtual void SelfTestOk(EmbeddedSystemX*) =0;
  virtual void Initialized(EmbeddedSystemX*) = 0;
  virtual void Restart(EmbeddedSystemX*)= 0;
  virtual void Configure(EmbeddedSystemX*)=0;
  virtual void ConfigurationEnded(EmbeddedSystemX*)=0;
  virtual void Exit(EmbeddedSystemX*)=0;
  virtual void Stop(EmbeddedSystemX*)=0;
  virtual void Start(EmbeddedSystemX*)=0;
  virtual void Suspend(EmbeddedSystemX*)=0;
  virtual void Resume(EmbeddedSystemX*)=0;
  virtual void SelfTestFailed(EmbeddedSystemX*, int ErrorNo)=0;
  virtual void ConfigX(EmbeddedSystemX*)=0;
  virtual void chMode(EmbeddedSystemX*)=0;
  virtual void eventX(EmbeddedSystemX*)=0;
  virtual void eventY(EmbeddedSystemX*)=0;

protected:
	State(std::string name)
	{
		name_ = name;
	}


private:
  State* state_;
  EmbeddedSystemX* ctx_;
};

#endif /* STATE_H_ */
=======
#pragma once
>>>>>>> fc1fc9adcb0267ddddc53c54e1bd270fe74336df
