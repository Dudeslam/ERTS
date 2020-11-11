// Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "EmbeddedSystemX.h"



int main()
{
  char name[] = "Test";
  EmbeddedSystemX* emx = new EmbeddedSystemX(name, 1);
	int notexit = 1;
	while(notexit)
	{
		Sleep(2000);
		std::cout << "hey" << std::endl;
		// Maybe just a text interface here, where we ask the user which events to call and then call events like so:
		emx->Start();
	}
	
  return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
