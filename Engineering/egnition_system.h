#include <exception>
#include <string>
using namespace std;

#ifndef __egnition_system_h__
#define __egnition_system_h__

#include "EngineDepartment.h"

// class EngineDepartment;
class egnition_system;

class egnition_system: public EngineDepartment
{

	public: void buildpart(vector <float > &specs, string aName);

};

#endif
