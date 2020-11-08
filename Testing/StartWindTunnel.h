#ifndef STARTWINDTUNNEL_H
#define STARTWINDTUNNEL_H

#include "Command.h"
#include "WindTunnel.h"

class StartWindTunnel : public Command {

    protected:

        WindTunnel* tunnel;

    public:

        StartWindTunnel(WindTunnel* tunnel);
        void setCarModel(Car* modelCar);
        bool isUsable() const;
        void execute();
};

#endif