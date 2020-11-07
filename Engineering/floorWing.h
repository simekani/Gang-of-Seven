#include <exception>
#include <string>
using namespace std;

#ifndef __floorWing_h__
#define __floorWing_h__

#include "AreodynamicsDepartment.h"

// class AreodynamicsDepartment;
class floorWing;

class floorWing: public AreodynamicsDepartment
{

	public: void buildpart(float* aSpec, string aName);
};

#endif
