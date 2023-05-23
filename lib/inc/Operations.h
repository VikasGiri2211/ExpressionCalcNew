#ifndef OPERATIONS
#define OPERATIONS

#include<iostream>

template<typename T>
class Operations{
public:
    T val1;
    T val2;
    virtual T  perform() = 0;
};

#endif // OPERATIONS