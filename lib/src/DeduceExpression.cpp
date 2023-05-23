
// Always remember IWYU i.e. include what you use in a file ,this for each and every file, to avoid errors.
/* When every file includes what it uses, then it is possible to edit any file and remove unused headers, without fear of 
accidentally breaking the upwards dependencies of that file */

#include<iostream>
#include<string>
#include<sstream>

#include"OperationManager.h"
std::string operationManager:: deduce_expression(std::string input) {
	//cerr << "INPUT: " << input << endl;
	std::string temp;
	std::string toReturn;
	std::stringstream cc;
	for (int i = 0; i < input.length(); i++) {

		if (input[i] == ' ') continue;

		if (isalpha(input[i]) || input[i] == '_') {
			std::stringstream ss;
			ss << input[i];
			int j = i + 1;
			while (j < input.length() && (isalpha(input[j]) || (isdigit(input[j]) || input[j] == '_'))) {
				ss << input[j];
				j++;
			}
			i = j - 1;
			ss >> temp;
			//std::cerr << "temp has: " << temp<< std::endl;
			cc << ds.retrieve<double>(temp);
			//map<string, double>::const_iterator it = variables.find(temp);
			//if (it != variables.end()) {
			//	cc << it->second;  // read from operation
			//}
		}
		else {
			cc << input[i];    // for anything like a . , * + ) ( / - other than a variable.
		}
	}
	cc >> toReturn;
	//cerr << "toReturn has: " << toReturn << endl;      // uncomment this line to see what toreturn gets.
	return toReturn;
}