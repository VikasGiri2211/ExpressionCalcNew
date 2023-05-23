
#include<iostream>

#include<sstream>
#include"OperationManager.h"

Point<double> operationManager::make_point(std::string expression) {
	Point<double> p1;
	int count = 0;
	for (int i = 0; i < expression.length(); i++) {

		if (isdigit(expression[i]) || expression[i] == '.') {
			// cerr << " Function Executed!" << endl;
			count++;
			std::stringstream ss;
			ss << expression[i]; // read from operation.
			int j = i + 1;
			while (j < expression.length() && (isdigit(expression[j])) || expression[j] == '.') {
				ss << expression[j];
				j++;
			}
			switch (count) {
			case 1: ss >> p1.x; // write to operation
				//cerr << " p1.x : " << p1.x << endl;
				break;
			case 2: ss >> p1.y;
				// cerr << " p1.y : " << p1.y << endl;
				break;
			case 3: ss >> p1.z;
				//cerr << " p1.z : " << p1.z << endl;
				break;
			default:
				std::cout << "Not a 2D or 3D Point!" << std::endl;
			}
			i = j - 1;  // because at end of the loop we are already doing i++;
		}
	}
	return p1;
};
