#ifndef SRT_CTX_H_
#define SRT_CTX_H_

class SRTState;

class SRTctx {
public:
	SRTctx();
	~SRTctx() {}
	virtual void RunRealTime();
	virtual void Simulate();
	virtual void Stop();
	virtual void Suspend();
	void ChangeState( SRTState* state);
	
protected:
	friend class SRTState;

private:
	SRTState* _state;
	SRTctx* _ctx;
};

#endif /*SRT_CTX_H_*/