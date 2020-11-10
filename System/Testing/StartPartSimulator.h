#ifndef STARTPARTSIMULATOR_H
#define STARTPARTSIMULATOR_H

#include "Command.h"
#include "../Engineering/Parts.h"
#include "../Simulator/PartSimulator.h"

class Parts;

class StartPartSimulator : public Command {

    private:

        Simulator* simulator;

    public:

        StartPartSimulator(Simulator* simulator);
        void setPart(Parts* part);
        void execute();
};

#endif