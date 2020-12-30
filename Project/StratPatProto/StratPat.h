#include <stdio.h>
#ifndef SRC_STRATEGY_H_
#define SRC_STRATEGY_H_



class StratPat {
public:
	virtual ~StratPat() {};
	virtual int Execute();

private:
};


class Context {
public:
	Context(StratPat *strat = nullptr) : Strat_(Strat_) {};
	~Context()
	{
		delete this ->Strat_;
	}

	void setStrat(StratPat * strat)
	{
		delete this->Strat_;
		this->Strat_ = strat;
	}
	
	void RunLogic()
	{
		this->Strat_->PerformFilter();
	}
private:
	StratPat * Strat_;

};
#endif /* SRC_STRATEGY_H_ */
