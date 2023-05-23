#ifndef ADDITION
#define ADDITION

#include"Operations.h"
template<typename T>          // this line is very important and has to be written always for derived class if base class has template.
class Addition: public Operations<T>{

    public:
      Addition(const T a, const T b) { Operations<T>::val1 = a ; Operations<T>::val2 = b; }
    T perform(){  // note that <T> between class to which function belongs and scope resolution operator is must when defining a function which was 
        return Operations<T>::val1 + Operations<T>::val2;                          // declared inside a class which used template and now we define function outside the class.
    }
};

// Note:: It is very important to remember that when using or accessing the data member or any member function of a template base class outside the base class or in a derived class ,
// we need to specify the scope of the function to which it belongs like here we did as Operations<T>:: for data members val1 and val2 , but for perform() it gives error , as it's a virtual function, maybe 
// Though windows compiler may allow not using it , others won't so always remember whem base class is using template.

#endif // ADDITION 