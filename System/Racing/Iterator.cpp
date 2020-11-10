#include "Iterator.h"

Iterator::~Iterator() {}

/*
 * CAR ITERATOR
 * CAR ITERATOR
 * CAR ITERATOR
 */

CarIterator::CarIterator(vector<Car*>* _cars) {
    cars = _cars;
    index = 1;
}

CarIterator::~CarIterator() {}

void CarIterator::first() {
    index = 0;
}

void CarIterator::next() {
    if (index < cars->size())
        index++;
}

Car* CarIterator::current() {
    vector<Car*>::iterator it = cars->begin();
    for (int i = 1; i <= index; i++) {
        it++;
    }
    return *it;
}

bool CarIterator::isDone() {
    if (index + 1 >= cars->size())
        return true;
    return false;
}

/*
 * CAR STORAGE
 * CAR STORAGE
 * CAR STORAGE
 */

void CarStorage::addCar(Car* _car) {
    cars.push_back(_car);
}

void CarStorage::removeCar(int ind) {
    vector<Car*>::iterator it = cars.begin();
    if (ind >= cars.size())
        return;
    
    for (int i = 0; i < ind; i++) {
        it++;
    }
    cars.erase(it);
}

int CarStorage::getSize() {
    return cars.size();
}

/*
 * RACING CAR STORAGE
 * RACING CAR STORAGE
 * RACING CAR STORAGE
 */

RacingCarStorage::RacingCarStorage() {}
RacingCarStorage::~RacingCarStorage() {}

Iterator* RacingCarStorage::createIterator() {
    return new CarIterator(&cars);
}

Car* RacingCarStorage::at(int index) {
    if (index >= cars.size())
        return NULL;
    return cars[index];
}

void RacingCarStorage::swapCars(int index1, int index2) {
    if (index1 >= cars.size() || index2 >= cars.size() || index1 < 0 || index2 < 0)
        return;
    swap(cars[index1], cars[index2]);
}