#ifndef AMS_CTX_H_
#define AMS_CTX_H_

class AMSState;

class AMSctx {
public:
	AMSctx();
	~AMSctx() {}
	virtual void chMode();
	virtual void eventX();
	virtual void eventY();
	virtual void Stop();
	virtual void Suspend();
	void ChangeState(AMSState* state);

protected:
	friend class AMSState;

private:
	AMSState* _state;
	AMSctx* _ctx;
};

#endif /*AMS_CTX_H_*/