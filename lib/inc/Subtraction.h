#ifndef SUBTRACTION 
#define SUBTRACTION

#include"Operations.h"
template<typename T>
class Subtraction: public Operations<T>{
    public:
    Subtraction(const T a, const T b) { Operations<T>::val1 = a; Operations<T>::val2 = b; }
    T perform(){
        return Operations<T>::val1 - Operations<T>::val2;
    }
};

#endif // SUBTRACTION