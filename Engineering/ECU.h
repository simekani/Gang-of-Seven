#ifndef __ECU_h__
#define __ECU_h__

#include "ElectronicsDepartment.h"

#include <vector>
#include <string>
using namespace std;

class ECU: public ElectronicsDepartment
{

	public: void buildpart(vector <float> aSpec, string aName);
};

#endif
