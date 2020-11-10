#ifndef MEMENTO_H
#define MEMENTO_H
#include <iostream>
#include <vector>
#include "../Engineering/Car.h"
#include "Iterator.h"
using namespace std;

class GridOrder {
    private:
        CarStorage* positions;

    public:
        GridOrder();
        ~GridOrder();
        CarStorage* getPositions();
        void setPositions(CarStorage*);
};

class GridOrderStore {
    private:
        GridOrder* gridOrder;
    
    public:
        GridOrderStore();
        ~GridOrderStore();
        GridOrder* getStoredGridOrder();
        void setStoredGridOrder(GridOrder*);
};

#endif
