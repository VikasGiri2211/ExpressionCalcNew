
#include<iostream>
#include<sstream>
#include"OperationManager.h"

void operationManager::make_variables(std::string str) {

	std::string variableName, expr;    
	char equals = '\0', temp;
	std::stringstream ss;
	for (int i = 0; i < str.length(); i++) {

		if (str[i] == ' ') continue;

		if(!equals && (isalpha(str[i]) || str[i] == '_')){
			std::stringstream ss;
			ss << str[i];
			int j = i + 1;
			while (j < str.length() && (isalpha(str[j]) || (isdigit(str[j]) || str[j] == '_'))) {
				ss << str[j];
				j++;
			}
			i = j - 1;
			ss >> variableName;
			//cerr << "VariableName: " << variableName << endl;
		}
		if (str[i] == '=') {
			equals = temp = str[i];
			//cerr << "Equals: " << equals << endl;
		}
		if (equals && str[i] != temp) {
			ss << str[i];
		}
	}
	ss >> expr;
	//cerr << "EXPR: " << expr << endl;
	bool comma = check_comma(expr);
	if (!comma) {  // implies that agar comma is not found. 
		//cerr << "IMHERE" << endl;
	std::string expression = deduce_expression(expr);
		//cerr << "EXPRESSION: " << expression << endl;
		double value = evaluate_expression(expression);
		ds.store(variableName, value);
		//std::cerr << "Variable stored!" << std::endl;
	}
	else if (comma) {
		std::string expression = deduce_expression(expr);
		//cerr << "EXP: " << expression << endl;

		Point<double> value = make_point(expression);
		std::cerr << "Given Point: " << variableName << value << std::endl;
		ds.store(variableName, value);
		//std::cerr << "pointVariable stored!" << std::endl;

	}
}
