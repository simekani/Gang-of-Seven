#ifndef PLANE_H
#define PLANE_H

#include "Transport.h"
class Plane : public Transport {


public:
	Plane();
	std::string getMode();
};

#endif