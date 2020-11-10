#ifndef PARTSIMULATOR_H
#define PARTSIMULATOR_H

#include <iostream>
using namespace std;

#include "CarSimulator.h"
#include "../Engineering/Parts.h"

class PartSimulator : public Simulator {

    private:

        Parts* part;

    public:

        PartSimulator();
        void setPart(Parts* part);
        bool runSimulation();
};

#endif