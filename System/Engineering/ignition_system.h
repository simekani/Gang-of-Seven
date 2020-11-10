#ifndef __ignition_system_h__
#define __ignition_system_h__

#include <vector>
#include <string>
using namespace std;

#include "EngineDepartment.h"

class ignition_system: public EngineDepartment
{

	public: void buildpart(vector <float > &specs, string aName);

};

#endif
