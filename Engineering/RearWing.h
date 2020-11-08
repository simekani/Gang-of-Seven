#include <exception>
#include <string>
using namespace std;

#ifndef __RearWing_h__
#define __RearWing_h__

#include "AerodynamicsDepartment.h"

class RearWing: public AerodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
