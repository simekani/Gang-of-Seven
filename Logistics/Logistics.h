#ifndef LOGISTICS_H
#define LOGISTICS_H

//ChainOfResponsibility
#include "Container.h"


//Command: Receivers, Commands, Invoker
#include "PriorityPallet.h"
#include "NonPriorityPallet.h"

#include "UnpackNonPriorityPallet.h"
#include "PackNonPriorityPallet.h"
#include "UnpackPriorityPallet.h"
#include "PackPriorityPallet.h"

#include "PreparePallet.h"

//Iterator
#include "Warehouse.h" //already includes "Iterator.h", "PartIterator.h"

//Template
#include "Ship.h"
#include "Truck.h"
#include "Plane.h"

class Logistics{

public:
    Logistics();

    void demonstrateChainOfResponsibility();

    void demonstrateCommand();

	void demonstrateIterator();

    void demonstrateTemplate();

};

#endif