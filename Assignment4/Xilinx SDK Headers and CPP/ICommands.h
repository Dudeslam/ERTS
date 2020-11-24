#pragma once
#include <iostream>



class ICommands
{
public:
	virtual ~ICommands() {};
	virtual void execute() = 0;

protected:
	ICommands& operator=(const ICommands&) { return *this; }
};





template <typename T>
class CommandBasic : public ICommands {
public:
	// Action is a function pointer to T (template type)
	typedef void (T:: *Action)();

	// Constructor
	CommandBasic(T *receiver, Action action)
		: _receiver(receiver), _action(action) {
		//std::cout << __FUNCTION__ << std::endl;
	}

	// Destructor
	~CommandBasic() {
		//std::cout << __FUNCTION__ << std::endl;
	}


	virtual void execute() {
		//std::cout << __FUNCTION__ << std::endl;
		(_receiver->*_action)();
	}

private:
	Action _action;	// Action = function pointer
	T* _receiver;	// Template receiver types
};