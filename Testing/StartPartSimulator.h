#ifndef STARTPARTSIMULATOR_H
#define STARTPARTSIMULATOR_H

#include "Command.h"
#include "Simulator.h"
#include "../Engineering/Parts.h"

class StartPartSimulator : public Command {

    private:

        Simulator* simulator;
        Parts* part;

    public:

        StartPartSimulator(Simulator* simulator);
        void setPart(Parts* part);
        void execute();
};

#endif