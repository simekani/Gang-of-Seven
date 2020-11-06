#include <exception>
#include <string>
using namespace std;

#ifndef __ECU_h__
#define __ECU_h__

#include "ElectronicsDepartment.h"

// class ElectronicsDepartment;
class ECU;

class ECU: public ElectronicsDepartment
{

	public: void buildpart(float* aSpec, string aName);
};

#endif
