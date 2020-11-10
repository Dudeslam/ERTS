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
  virtual void SelfTestOk(EmbeddedSystemX*);
  virtual void Initialized(EmbeddedSystemX*);
  virtual void Restart(EmbeddedSystemX*);
  virtual void Configure(EmbeddedSystemX*);
  virtual void ConfigurationEnded(EmbeddedSystemX*);
  virtual void Exit(EmbeddedSystemX*);
  virtual void Stop(EmbeddedSystemX*);
  virtual void Start(EmbeddedSystemX*);
  virtual void Suspend(EmbeddedSystemX*);
  virtual void Resume(EmbeddedSystemX*);
  virtual void SelfTestFailed(EmbeddedSystemX*, int ErrorNo);
  virtual void ConfigX(EmbeddedSystemX*);
  virtual void chMode(EmbeddedSystemX*);
  virtual void eventX(EmbeddedSystemX*);
  virtual void eventY(EmbeddedSystemX*);

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