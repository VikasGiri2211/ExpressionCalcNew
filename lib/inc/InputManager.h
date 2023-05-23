#ifndef __INPUTMANAGER__
#define __INPUTMANAGER__

#include<iostream>
#include<string>
#include"Input.h"    // because of UserInputData* NOte: always include what you use, try removing it and see the error.

class inputManager{  

public:

	bool isValidSyntax(std::string str);

	UserInputData* handleInput(std::string str);

	std::string getErrorMessage() {

		return "Invalid Syntax!\n";
	}
};

#endif // __INPUTMANAGER__