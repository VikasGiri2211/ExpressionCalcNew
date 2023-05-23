#ifndef POWER
#define POWER

 #include<cmath>
#include"Operations.h"

template<typename T>
class Power : public Operations<T> {
public:
	Power(const T a, const T b) { Operations<T>::val1 = a; Operations<T>::val2 = b; }
	T perform() {
		return pow(Operations<T>::val1, Operations<T>::val2);
	}
};

#endif // POWER