#ifndef STARTPARTSIMULATOR_H
#define STARTPARTSIMULATOR_H

#include "Command.h"
#include "Simulator.h"
#include "../Engineering/Parts.h"

class StartSimulator : public Simulator {

    private:

        Simulator* simulator;
        Parts* part;

    public:

        StartSimulator(Simulator* simulator);
        void setPart(Parts* part);
        void execute();
};

#endif