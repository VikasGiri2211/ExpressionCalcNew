#ifndef DIVISION
#define DIVISION


#include"Operations.h"

#include<iostream>
template<typename T>
class Division: public Operations<T>{
    public:
    Division(const T a, const T b) { Operations<T>::val1 = a; Operations<T>::val2 = b; }
    T perform(){
        if (Operations<T>::val2 == 0) {
            std::cout << "Error: Division by zero" << std::endl;
            return -99999999;
        }
        else {
            return Operations<T>::val1 / Operations<T>::val2;
        }
    }
};

#endif // DIVISION