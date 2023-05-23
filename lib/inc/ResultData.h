#ifndef RESULTDATA
#define RESULTDATA

#include<string>
#include<sstream>
#include"Point.h"

class ResultData {
protected:    // how to work with p and d when protected?
public:
	Point<double> p;
	double d;
	virtual std::string stringify() const = 0;  // const because stringfy() now won't be able to change the state of the object it is called through and neither modify any of its data members.
};

class pointResult : public ResultData {
public:
	std::string stringify() const override {
		std::string str;
		std::stringstream ss;
		ss << p;
		getline(ss, str);
		return str;
	}
};

class doubleResult : public ResultData {
public:
	std::string stringify() const override {
		std::string str = std::to_string(d);
		return str;
	}
};
#endif // RESULTDATA