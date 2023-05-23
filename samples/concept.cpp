
#include <iostream>

class UserInputData {
protected:
	std::string rawData;
};

class ResultData {
public:
	virtual std::string stringify() const = 0;  // const because stringfy() now won't be able to change the state of the object it is called through and neither modify any of its data members.
};
class IOManager {
public:
	UserInputData* processInput() {
		return nullptr;
	}
	std::string getErrorMessage() { return ""; }
};

class OperationManager {
	ResultData* lastResult;
public:
	bool performOperation(UserInputData& uiData) {
		return false;
	}
	std::string getErrorMessage() { return ""; }
	const ResultData* getLastResult() { return lastResult; }
};

int main(int argc, char** argv) {
	IOManager ioManager;
	OperationManager opsManager;
	while (true) {
		UserInputData* ptrUiData = ioManager.processInput();
		if (ptrUiData) {
			if (opsManager.performOperation(*ptrUiData)) {
				if (auto res = opsManager.getLastResult()) {
					std::cout << res->stringify() << std::endl;
				}
			}
			else {
				std::cout << opsManager.getErrorMessage() << std::endl;
			}
			delete ptrUiData;
		}
		else {
			std::cout << ioManager.getErrorMessage() << std::endl;
		}
	}
	return 0;
}