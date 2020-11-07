#include <exception>
using namespace std;

#ifndef __sendSpecs_h__
#define __sendSpecs_h__

// #include "EngineeringTeam.h"

class EngineeringTeam;
class sendSpecs;

class sendSpecs
{
	public: EngineeringTeam* _unnamed_EngineeringTeam_;

	public: void notify(EngineeringTeam* aEngTeam);
};

#endif
