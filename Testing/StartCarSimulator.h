#ifndef STARTCARSIMULATOR_H
#define STARTCARSIMULATOR_H

#include "Command.h"
#include "CarSimulator.h"

class StartCarSimulator : public Command {

    private:

        Simulator* simulator;

    public:

        StartCarSimulator(Simulator* simulator);
        void setCarModel(Car* model);
        void execute();
};

#endif