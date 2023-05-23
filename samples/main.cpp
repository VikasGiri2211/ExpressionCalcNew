#include<iostream>

#include<sstream>

#include"DataStorage.h"
#include"InputManager.h"
#include"OperationManager.h"       // including these to avoid erros so, remember AIWYU.

int main() {

	DataStorage dataStore;
	inputManager iManager;
	operationManager opManager{ dataStore };
	std::string input;
	std::cout << "Welcome! I'm Your own 3D calc." << std::endl;
	std::cout << "Enter variable assignments and expressions or also point variable assignments. Enter empty line to finish." << std::endl;
	while (std::getline(std::cin, input) && !input.empty()) {

		UserInputData* ptrUiData = iManager.handleInput(input);

		if (ptrUiData) {
			if (opManager.performOperation(*ptrUiData)) {
				if (auto res = opManager.getLastResult()) {
					std::cout << "Result: " << res->stringify() << std::endl;
					delete res;
				}
			}
			else {
				std::cout << opManager.getErrorMessage() << std::endl;
			}
			delete ptrUiData;
		}
		else {
			std::cout << iManager.getErrorMessage() << std::endl;

		}
	}
	return 0;
}