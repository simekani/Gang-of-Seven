#ifndef SHIP_H
#define SHIP_H
#include <string>

#include "Transport.h"
//Concrete Template Class
class Ship : public Transport {
public:
	std::string getMode();
};



#endif
