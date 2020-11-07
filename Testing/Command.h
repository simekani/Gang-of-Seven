#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
using namespace std;

class Command {

    protected:

        bool Result;

    public:

        Command();
        bool getResult() const;
        virtual void execute()=0;
};

#endif