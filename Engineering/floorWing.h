#include <exception>
#include <string>
using namespace std;

#ifndef __floorWing_h__
#define __floorWing_h__

#include "AerodynamicsDepartment.h"


class floorWing: public AerodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
