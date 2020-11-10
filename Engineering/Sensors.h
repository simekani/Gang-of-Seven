#ifndef __Sensors_h__
#define __Sensors_h__

#include <vector>
#include <string>
using namespace std;

#include "ElectronicsDepartment.h"

class Sensors: public ElectronicsDepartment
{
	public: void buildpart(vector <float> &aSpec, string aName);
};

#endif
