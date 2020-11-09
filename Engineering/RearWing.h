#ifndef __RearWing_h__
#define __RearWing_h__

#include <vector>
#include <string>
using namespace std;

#include "AerodynamicsDepartment.h"
#include "Rear.h"

class RearWing: public AerodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
