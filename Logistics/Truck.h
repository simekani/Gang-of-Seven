#ifndef TRUCK_H
#define TRUCK_H
#include <string>


//Concrete Template Class
#include "Transport.h"
class Truck : public Transport {
public:
	std::string getMode();
};
#endif
