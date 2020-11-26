
#include "AMSState.h"
#include "AMSctx.h"
#include "Windows.h"

// AMSState basestate for the Application Mode Setting
void AMSState::chMode(AMSctx*) {}
void AMSState::eventY(AMSctx*) {}
void AMSState::eventX(AMSctx*) {}
void AMSState::EntryAction(AMSctx*) {}
void AMSState::Stop(AMSctx*) {}
void AMSState::Suspend(AMSctx*) {}

const char* AMSState::stateName()
{
	return "None";
}

void AMSState::ChangeState(AMSctx* ctx, AMSState* s)
{
	ctx->ChangeState(s);
}


//mode1 functions
AMSState* Mode1::inst_ = 0;

AMSState* Mode1::Instance() {
	if (inst_ == 0) {
		inst_ = new Mode1;
	}
	return inst_;
}

const char* Mode1::stateName() {
	return "Mode1";
}

void Mode1::chMode(AMSctx* ctx) {
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode2::Instance());
}

void Mode1::eventX(AMSctx* ctx) {
	std::cout << "Got event X" << std::endl;
	this->responseM1eventX();
}

void Mode1::responseM1eventX() {
	std::cout << "Responding to event X in Mode 1" << std::endl;
	Sleep(100);
}


//mode2 functions
AMSState* Mode2::inst_ = 0;

AMSState* Mode2::Instance() {
	if (inst_ == 0) {
		inst_ = new Mode2;
	}
	return inst_;
}

const char* Mode2::stateName() {
	return "Mode2";
}

void Mode2::chMode(AMSctx* ctx) {
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode3::Instance());
}

void Mode2::eventY(AMSctx* ctx) {
	std::cout << "Got event Y" << std::endl;
	this->responseM2eventY();
}

void Mode2::eventX(AMSctx* ctx) {
	std::cout << "Got event X" << std::endl;
	this->responseM2eventX();
}

void Mode2::responseM2eventX() {
	std::cout << "Responding to event X in Mode 2" << std::endl;
}

void Mode2::responseM2eventY() {
	std::cout << "Responding to event Y in Mode 2" << std::endl;
}


//mode3 functions
AMSState* Mode3::inst_ = 0;

AMSState* Mode3::Instance() {
	if (inst_ == 0) {
		inst_ = new Mode3;
	}
	return inst_;
}

const char* Mode3::stateName() {
	return "Mode3";
}

void Mode3::chMode(AMSctx* ctx) {
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode1::Instance());
}

void Mode3::eventX(AMSctx* ctx) {
	std::cout << "Got event X" << std::endl;
	this->responseM3eventX();
}

void Mode3::responseM3eventX() {
	std::cout << "Responding to event X in Mode 3" << std::endl;
}
