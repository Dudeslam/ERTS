#pragma once

class EmbeddedSystemX;

class State {
public:

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
  virtual void Simulate(EmbeddedSystemX*);
  virtual void RunRealTime(EmbeddedSystemX*);

  virtual void EntryAction(EmbeddedSystemX*);
  virtual const char* stateName();

protected:
  void ChangeState(EmbeddedSystemX* t, State* s);
	
};