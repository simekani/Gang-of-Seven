#ifndef FACTORY_H
#define FACTORY_H
#include <iostream>
#include "Race.h"
using namespace std;

class RaceFactory {
    protected:
        Race* race;
    
    public:
        virtual Race* createRace(CarStorage*, GridOrderStore*) = 0;
};

class QualifyingRaceFactory : public RaceFactory {
    public: 
        QualifyingRaceFactory();
        Race* createRace(CarStorage*, GridOrderStore*);
};

class FinalRaceFactory : public RaceFactory {
    public:
        FinalRaceFactory();
        Race* createRace(CarStorage*, GridOrderStore*);
};

#endif