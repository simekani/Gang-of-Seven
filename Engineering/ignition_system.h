#include <exception>
#include <string>
using namespace std;

#ifndef __ignition_system_h__
#define __ignition_system_h__

#include "EngineDepartment.h"

// class EngineDepartment;
class ignition_system;

class ignition_system: public EngineDepartment
{

	public: void buildpart(vector <float > &specs, string aName);

};

#endif
