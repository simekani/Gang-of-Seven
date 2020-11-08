#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car {
    private:
        string name;

    public:
        Car(string);
        ~Car();
        string getName();
};

#endif