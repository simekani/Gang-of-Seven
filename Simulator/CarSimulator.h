#ifndef CARSIMULATOR_H
#define CARSIMULATOR_H

#include "Simulator.h"
#include "../Engineering/Car.h"

class Simulator;

class CarSimulator : public Simulator {

    private:

        float CarModelWeight;
        float CarModelGrip;

    public:
        CarSimulator();
        void setCarModelDetails(float PotentialGrip, float PotentialWeight);
        bool runSimulation();
};

#endif