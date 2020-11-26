#ifndef SRT_STATE_H_
#define SRT_STATE_H_

#include <iostream>
#include <stdlib.h>

class AMSctx;

class AMSState
{
public:
	virtual void chMode(AMSctx*);
	virtual void eventX(AMSctx*);
	virtual void eventY(AMSctx*);
	virtual void EntryAction(AMSctx*);
	virtual void Stop(AMSctx*);
	virtual void Suspend(AMSctx*);

	virtual const char* stateName();

protected:
	virtual void ChangeState(AMSctx* ctx, AMSState* s);

};


class Mode1 : public AMSState
{
public:

	static AMSState* Instance();

	const char* stateName();
	void chMode(AMSctx*) override;
	void eventX(AMSctx*) override;

	static void responseM1eventX();

private:
	static AMSState* inst_;
};


class Mode2 : public AMSState
{
public:
	static AMSState* Instance();

	const char* stateName();
	void chMode(AMSctx*) override;
	void eventY(AMSctx*) override;
	void eventX(AMSctx*) override;

	static void responseM2eventX();
	static void responseM2eventY();

private:
	static AMSState* inst_;
};


class Mode3 : public AMSState
{
public:
	static AMSState* Instance();

	const char* stateName();
	void chMode(AMSctx*) override;
	void eventX(AMSctx*) override;

	static void responseM3eventX();

private:
	static AMSState* inst_;
};

#endif /* SRT_STATE_H_ */
