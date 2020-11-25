#include "realTimeLoop.h"
#include <iostream>
#include <sleep.h>	// for sleep



// RealTimeLoop
void RealTimeLoop::Stop(EmbeddedSystemX* ctx) {
	std::cout << "Stopping real time loop" << std::endl;
	ChangeState(ctx, Ready::Instance());
}

void RealTimeLoop::Suspend(EmbeddedSystemX* ctx) {
	std::cout << "Suspending real time loop" << std::endl;
	ChangeState(ctx, Suspended::Instance());
}







//mode1 functions
State* Mode1::inst_ = 0;

State* Mode1::Instance(){
	if (inst_ == 0) {
		inst_ = new Mode1;
	}
	return inst_;
}


const char* Mode1::stateName(){
	return "Mode1";
}

void Mode1::chMode(EmbeddedSystemX* ctx){
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode2::Instance());
}

void Mode1::eventX(EmbeddedSystemX* ctx){
	std::cout << "Got event X" << std::endl;
	this->responseM1eventX();
}

void Mode1::responseM1eventX(){
	std::cout << "Responding to event X in Mode 1" << std::endl;
	usleep(1000);
}





//mode2 functions
State* Mode2::inst_ = 0;

State* Mode2::Instance(){
	if (inst_ == 0) {
		inst_ = new Mode2;
	}
	return inst_;
}



const char* Mode2::stateName(){
	return "Mode2";
}

void Mode2::chMode(EmbeddedSystemX* ctx){
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode3::Instance());
}

void Mode2::eventY(EmbeddedSystemX* ctx){
	std::cout << "Got event Y" << std::endl;
	this->responseM2eventY();
}

void Mode2::eventX(EmbeddedSystemX* ctx){
	std::cout << "Got event X" << std::endl;
	this->responseM2eventX();

}

void Mode2::responseM2eventX(){
	std::cout << "Responding to event X in Mode 2" << std::endl;
}

void Mode2::responseM2eventY(){
	std::cout << "Responding to event Y in Mode 2" << std::endl;
}





//mode3 functions
State* Mode3::inst_ = 0;

State* Mode3::Instance(){
	if (inst_ == 0) {
		inst_ = new Mode3;
	}
	return inst_;
}

const char* Mode3::stateName(){
	return "Mode3";
}

//void Mode3::EntryAction(EmbeddedSystemX* ctx){
//	this->eventX(ctx);
//}

void Mode3::chMode(EmbeddedSystemX* ctx){
	std::cout << "Changing mode" << std::endl;
	ChangeState(ctx, Mode1::Instance());
}

void Mode3::eventX(EmbeddedSystemX* ctx){
	std::cout << "Got event X" << std::endl;
	this->responseM3eventX();
}

void Mode3::responseM3eventX(){
	std::cout << "Responding to event X in Mode 3" << std::endl;
}


void Simulation::RunRealTime(SimulateRealTimeState* SRTctx)
{
	ChangeState(SRTctx, RealTimeExecution::Instance());
}

void Simulation::Stop(SimulateRealTimeState* SRTctx)
{

}

void Simulation::Suspend(SimulateRealTimeState* SRTctx)
{

}



void RealTimeExecution::Simulate(SimulateRealTimeState* SRTctx)
{
	ChangeState(SRTctx, Simulate::Instance());
}

void RealTimeExecution::Stop(SimulateRealTimeState* SRTctx)
{

}

void RealTimeExecution::Suspend(SimulateRealTimeState* SRTctx)
{

}

