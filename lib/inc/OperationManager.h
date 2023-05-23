#ifndef OPERATIONMANAGER
#define OPERATIONMANAGER

#include"ResultData.h"
#include"Input.h"
#include"DataStorage.h"

class operationManager{
	ResultData* lastResult;
	DataStorage ds;

public:
	operationManager(DataStorage dataStore) {
		ds = dataStore;
	} 
	bool check_assignment(std::string str);
	                                    // both defined in CheckString.cpp
	bool check_comma(std::string str);

	bool check_point(std::string str);

	void make_variables(std::string str);

	std::string deduce_expression(std::string str);

	Point<double> make_point(std::string str);

	double evaluate_expression(std::string str);

	Point<double> evaluate_point_expression(std::string str);

	ResultData* calculate_result(std::string str);

	bool performOperation(UserInputData& uiData) {

		std::string str = uiData.get_rawData();

		if (true) { // here afterwards we'll check for valid operators

			bool equal = check_assignment(str);
			//cerr << "Equal : " << equal << endl;
			if (equal) {
				//cerr << "Reached here " << endl;
				make_variables(str);
				lastResult = nullptr;
			}
			else {
				 lastResult = calculate_result(str);
			}
			return true;
		}
		return false;
	}
	std::string getErrorMessage() {

		return "Invalid Operators found!\n";
	}

	const ResultData* getLastResult() { return lastResult; }
};

#endif // OPERATIONMANAGER