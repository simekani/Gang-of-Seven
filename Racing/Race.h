#ifndef RACE_H
#define RACE_H
#include <iostream>
#include "Iterator.h"
#include "Memento.h"
#include "Observer.h"
#include <cstdlib>
#include <time.h>
using namespace std;

class Race {
    protected:
        CarStorage* carStorage;
        Iterator* iterator;
        GridOrderStore* store;

    public:
        Race();
        virtual ~Race();
        virtual void startRace() = 0;

};

class QualifyingRace : public Race {
    public:
        QualifyingRace(CarStorage*, GridOrderStore*);
        virtual ~QualifyingRace();
        void startRace();
};

class FinalRace : public Race {
    public:
        FinalRace(CarStorage*, GridOrderStore*);
        virtual ~FinalRace();
        void startRace();
};

#endif