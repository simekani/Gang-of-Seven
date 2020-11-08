#ifndef SIMULATOR_H
#define SIMUALTOR_H

#include <iostream>
using namespace std;


class Simulator {

    public:

        Simulator();
        virtual bool runSimulation()=0;
};

#endif