
#ifndef REAL_TIME_LOOP_H_
#define REAL_TIME_LOOP_H_

#include "AMSctx.h"
#include "SRTctx.h"
#include "Operational.h"

class RealTimeLoop : public Operational {
public:
	static State* Instance();
	void EntryAction(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*);
	void Suspend(EmbeddedSystemX*);
	void chMode(EmbeddedSystemX*);
	void eventX(EmbeddedSystemX*);
	void eventY(EmbeddedSystemX*);
	void RunRealTime(EmbeddedSystemX*);
	void Simulate(EmbeddedSystemX*);

	virtual const char* stateName();

private:
	static State* inst_;
	AMSctx* amsctx_;
	SRTctx* srtctx_;
};


#endif // REAL_TIME_LOOP_H_
