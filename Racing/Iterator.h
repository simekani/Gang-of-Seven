#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>
#include <vector>
#include <cstdlib>
#include "../Engineering/Car.h"
using namespace std;

class Iterator {
    protected:
        int index;

    public:
        virtual ~Iterator();
        virtual void first() = 0;
        virtual void next() = 0;
        virtual Car* current() = 0;
        virtual bool isDone() = 0;
};

class CarIterator : public Iterator {
    private:
        vector<Car*>* cars;  
    public:
        CarIterator(vector<Car*>*);
        virtual ~CarIterator();
        void first();
        void next();
        Car* current();
        bool isDone();
};

class CarStorage {
    protected:
        vector<Car*> cars;

    public:
        virtual Iterator* createIterator() = 0;
        void addCar(Car*);
        void removeCar(int);
        int getSize();
        virtual Car* at(int) = 0;
        virtual void swapCars(int, int) = 0;
};

class RacingCarStorage : public CarStorage {
    public:
        RacingCarStorage();
        virtual ~RacingCarStorage();
        Iterator* createIterator();
        Car* at(int);
        void swapCars(int, int);
};

#endif