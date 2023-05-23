
#include<iostream>
#include"OperationManager.h"
#include<string>


bool operationManager::check_assignment(std::string str) {
	//cerr << "RasWRf : " << rawData << " end 0d i9t" << endl;
	auto it = str.find("=");
	if (it != std::string::npos) {// because for string the it will return size_t and not point to empty end.. like in map.
			                 //If std::string::find does not find the substring in the string, it returns std::string::npos, which implies not found, the size of string.
			                 // implies, agar = mila to hi.
		return true;
	}
	return false;
}

bool operationManager::check_comma(std::string str) {
	if (str.find(",") != std::string::npos) { // means if comma is found.
		return true;
	}
	return false;
}
