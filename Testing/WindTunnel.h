#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H

#include <iostream>
using namespace std;

#include "Car.h"

class WindTunnel { 

    private:

        Car* carModel;

    public:

        WindTunnel();
        void setCarModel(Car* carModel);
        bool run();
};

#endif