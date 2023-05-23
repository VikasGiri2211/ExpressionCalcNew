#ifndef DATASTORAGE
#define DATASTORAGE

#include<iostream>
#include<map>
#include<any>
#include<string>
#include<stdexcept>
#include"Point.h"

class DataStorage {
	std::map<std::string, std::any> variables;
public:
	template <typename T>
	void store(const std::string& name, const T& value) {
		variables[name] = value;
	}

	template <typename T>
	T retrieve(const std::string& name) {
		auto it = variables.find(name);
		if (it != variables.end()) {
			//std::cerr << "Reached Here" << std::endl;
			return std::any_cast<T>(it->second);

		}
		throw std::out_of_range("variable not found");
	}

	bool searchPoint(const std::string& name) {
		auto it = variables.find(name);
		if (it != variables.end()) {
			//std::cerr << it->second.type().name() << std::endl;
			if (it->second.type() == typeid(Point<double>))
				return true;
		}
		//std::cerr << "I'm heeeere ....." << std::endl;
		return false;
	}
};
#endif // DATASTORAGE