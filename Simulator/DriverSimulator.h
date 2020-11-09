#ifndef DRIVERSIMULATOR_H
#define DRIVERSIMULATOR_H

#include "Simulator.h"
#include "../Engineering/Driver.h"

class DriverSimulator : public Simulator {

    private:

        Driver* CarDriver;

    public:

        DriverSimulator();
        void setDriver(Driver* CarDriver);
        bool runSimulation();
};

#endif