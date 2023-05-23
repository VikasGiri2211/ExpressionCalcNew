#ifndef USERINPUTDATA
#define USERINPUTDATA

class UserInputData {
protected:
	std::string rawData;
public:
	UserInputData(std::string str) {
		rawData = str;
	}
	 const std::string& get_rawData() {
		return rawData;
	}
};

#endif // USERINPUTDATA