#ifndef DRIVER_H
#define DRIVER_H

#include <string>

using namespace std;

#include "../Mediator/EngineeringTeam.h"

class Driver{

	private: string _attribute;
	public:
		Driver(); 
		EngineeringTeam* _EngineeringTeam_;
};

#endif
