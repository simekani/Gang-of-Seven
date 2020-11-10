#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "../Engineering/Car.h"
using namespace std;

class PitStop; //Forward Declaration
class PitCrew { //Abstract Observer
    protected:
        PitStop* pitStop;
        string type;
        Car* car;
    
    public:
        void registerCrew(PitStop*);
        void setCar(Car*);
        virtual void update() = 0;
        string getType();
};

class Refueller : public PitCrew { //Concrete Observer
    public:
        Refueller();
        virtual ~Refueller();
        virtual void update();
};

class TyreChanger : public PitCrew { //Concrete Observer
    public:
        TyreChanger();
        virtual ~TyreChanger();
        virtual void update();
};

class PitStop { //Abstract Subject
    private:
        vector<PitCrew*> pitCrew;

    protected:
        vector<Car*> cars;

    public:
        void attach(PitCrew*);
        void detach(PitCrew*);
        void notify(); //Go through each observer and call the update
        void assessCars();
        virtual Car* getCar(int) = 0;
        virtual void setCars(vector<Car*>) = 0;
        virtual int generateRandomNumber() = 0;
};

class TeamPitStop : public PitStop { //CONCRETE SUBJECT
    public:
        TeamPitStop();
        ~TeamPitStop();
        Car* getCar(int);
        void setCars(vector<Car*>);
        virtual int generateRandomNumber();
};

#endif