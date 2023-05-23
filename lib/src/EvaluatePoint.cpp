
#include<iostream>

#include<any>
#include<string>
#include<sstream>
#include"OperationManager.h"
#include<vector>
#include"Point.h"
Point<double> operationManager:: evaluate_point_expression(std::string str) {
	std::vector<std::string> vec;
	std::string temp;
	char opr = ' ';
	for (int i = 0; i < str.length(); i++) {

		if (str[i] == ' ') continue;

		if (isalpha(str[i]) || str[i] == '_') {
			std::stringstream ss;
			ss << str[i];
			int j = i + 1;
			while (j < str.length() && (isalpha(str[j]) || (isdigit(str[j]) || str[j] == '_'))) {
				ss << str[j];
				j++;
			}
			i = j - 1;
			ss >> temp;
			vec.push_back(temp);
		}
		else {
			opr = str[i];
		}
	}
	Point<double> p1 = ds.retrieve<Point<double>>(vec[0]);
	Point<double> p2 = ds.retrieve<Point<double>>(vec[1]);

	switch (opr) {
	case '-': return p1 - p2;
		break;
	case '+': return p1 + p2;
		break;
	case '*': return p1 * p2;
		break;
	case '/': return p1 / p2;
		break;
	}
	return p1; // just to ensure all control paths return a value to avoid this warning by compiler.
}
