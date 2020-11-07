#include <exception>
#include <string>
using namespace std;

#ifndef __RearWing_h__
#define __RearWing_h__

#include "AreodynamicsDepartment.h"

class RearWing: public AreodynamicsDepartment
{
	public: void buildpart(vector <float* > &specs, string aName);
	
};

#endif
