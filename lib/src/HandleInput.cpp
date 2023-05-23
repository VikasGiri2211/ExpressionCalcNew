
#include"InputManager.h"
#include"Input.h"            // JUST TO AVOID ERRORS, OTHERWISE INCLUDED IN INPUTMANAGER 

UserInputData* inputManager::handleInput(std::string str) {

	if (isValidSyntax(str)) {            // to validate input data syntax.

		UserInputData* uid = new UserInputData(str);

		return uid;
	}
	return nullptr;
}