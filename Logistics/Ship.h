#ifndef SHIP_H
#define SHIP_H
#include <string>

#include "Transport.h"
class Ship : public Transport {


public:
	Ship();
	string getMode();
};

#endif
