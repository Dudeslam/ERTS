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
	std::cout << "Choose which events to call: C (Configure), S (Suspend), T (start), s (stop), r (resume), R (Restart), c (chMode), x (ConfigX), X (eventX), Y (eventY)" << std::endl;
	char field;
	std::cin >> field;
	switch (field)
	{
	case 'C':
		emx->Configure();
		break;
	case 'S':
		emx->Suspend();
		break;
	case 'T':
		emx->Start();
		break;
	case 's':
		emx->Stop();
		break;
	case 'R':
		emx->Restart();
		break;
	case 'c':
		emx->chMode();
		break;
	case 'r':
		emx->Resume();
		break;
	case 'x':
		emx->ConfigX();
		break;
	case 'X':
		emx->eventX();
		break;
	case 'Y':
		emx->eventY();
		break;
	default:
		run(emx, notexit);
		break;
	}
}