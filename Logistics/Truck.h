#ifndef TRUCK_H
#define TRUCK_H
#include <string>

#include "Transport.h"
class Truck : public Transport {


public:
	Truck();
	string getMode();
};

#endif
