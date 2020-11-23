#pragma once
#include "ICommands.h"
#include <iostream>
#include <vector>
#include <Windows.h>



class Invoker
{
public:
	Invoker() { std::cout << __FUNCTION__ << std::endl; };
	~Invoker() { std::cout << __FUNCTION__ << std::endl; };

	void addCommand(ICommands* command) {
		std::cout << __FUNCTION__ << std::endl;
		_vectorOfCommands.push_back(command);
	};


	void executeVectorOfCommands() const {
		std::cout << __FUNCTION__ << std::endl;
		for (unsigned int i = 0; i < _vectorOfCommands.size(); ++i) {
			_vectorOfCommands[i]->execute();
			Sleep(2000);
		}
		std::cout << std::endl;
	};

private:
	std::vector<ICommands*> _vectorOfCommands;
};//*/
