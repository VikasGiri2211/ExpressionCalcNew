
#include<iostream>
#include<string>

#include"OperationManager.h"
#include"ResultData.h"

ResultData* operationManager::calculate_result(std::string str) {
	ResultData* resData;
	bool hasPoint = check_point(str);

	if (hasPoint) {

		Point<double> result = evaluate_point_expression(str);
		resData = new pointResult();
		resData->p = result;
		std::string str = resData->stringify();
		return resData;
	}
	else if (!hasPoint) {
		std::string expression = deduce_expression(str);
		//std::cerr << "EXP: " << expression << std::endl;

		double result = evaluate_expression(expression);
		resData = new doubleResult();
		resData->d = result;
		std::string str = resData->stringify();
		return resData;
	}
	//std::cerr << "WE are deleting the resData now" << std::endl;
	//delete resData;
	return nullptr;  // just to avoid "not all control paths return a value " warning and ensure always something must be returned , though nullptr here.
}
