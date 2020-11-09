#ifndef EMBEDDEDSYSTEMX_H_
#define EMBEDDEDSYSTEMX_H_

class State;

class EmbeddedSystemX {
public:
  EmbeddedSystemX();

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

private:
  friend class State;
  void ChangeState(State*);
private:
  State* _state;
	int VersionNo;
	char* Name;
};

#endif /* EMBEDDEDSYSTEMX_H_ */