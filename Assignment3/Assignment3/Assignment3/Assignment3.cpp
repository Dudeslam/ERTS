// Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "EmbeddedSystemX.h"

void run(EmbeddedSystemX*, int);

int main()
{
  char name[] = "Test";
  EmbeddedSystemX* emx = new EmbeddedSystemX(name, 1);
	int notexit = 1;
	while(notexit)
	{
		Sleep(2000);
		run(emx, notexit);
	}
	
  return 0;
}


void run(EmbeddedSystemX* emx, int notexit)
{
	std::cout << "Choose which events to call: co (Configure), su (Suspend), st (start), stop (stop), r (resume), R (Restart), ch (chMode), Cx (ConfigX), Ex (eventX), Ey (eventY)" << std::endl;
	char field;
	std::cin >> field;
	switch (field)
	{
	case 'co':
		emx->Configure();
		break;
	case 'su':
		emx->Suspend();
		break;
	case 'st':
		emx->Start();
		break;
	case 'stop':
		emx->Stop();
		break;
	case 'R':
		emx->Restart();
		break;
	case 'ch':
		emx->chMode();
		break;
	case 'Cx':
		emx->ConfigX();
		break;
	case 'Ex':
		emx->eventX();
		break;
	case 'Ey':
		emx->eventY();
		break;
	default:
		run(emx, notexit);
		break;
	}
}