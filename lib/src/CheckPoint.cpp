
#include<iostream>

#include<string>
#include<sstream>

#include"OperationManager.h"

bool operationManager::check_point(std::string str) {
	std::string temp;
	std::string toReturn;
	std::stringstream cc;
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
		}
		//cerr << "TEMP: " << temp << endl;
		if (ds.searchPoint(temp)) {
			std::cerr << "POINT FOUND! " << std::endl;
			return true;
		}
	}
	return false;
}
