#ifndef MULTIPLICATION
#define MULTIPLICATION


#include"Operations.h"

template<typename T>
class Multiplication: public Operations<T>{
    public:
    Multiplication(const T a, const T b) { Operations<T>::val1 = a; Operations<T>::val2 = b; }
    T perform(){
        return Operations<T>::val1 * Operations<T>::val2;
    }

};

#endif // MULTIPLICATION