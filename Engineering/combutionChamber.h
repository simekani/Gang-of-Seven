#include <exception>
#include <string>
using namespace std;

#ifndef __combutionChamber_h__
#define __combutionChamber_h__

#include "EngineDepartment.h"

// class EngineDepartment;
class combutionChamber;

class combutionChamber: public EngineDepartment
{

	public: void buildpart(float* aSpec, string aName);
};

#endif
