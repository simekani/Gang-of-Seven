#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H

#include <iostream>
using namespace std;

#include "../Engineering/Car.h"

class WindTunnel { 

    private:

        Car* carModel;
        int tokens;

    public:

        WindTunnel();
        void setCarModel(Car* carModel);
        void decreaseTokens();
        bool hasTokens();
        bool run();
};

#endif