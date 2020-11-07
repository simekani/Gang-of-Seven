#include <exception>
#include <string>
using namespace std;

#ifndef __Sensors_h__
#define __Sensors_h__

#include "ElectronicsDepartment.h"

// class ElectronicsDepartment;
class Sensors;

class Sensors: public ElectronicsDepartment
{

	public: void buildpart(vector <float*> aSpec, string aName);
};

#endif
