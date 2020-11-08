#include <exception>
#include <string>
using namespace std;

#ifndef __floorWing_h__
#define __floorWing_h__

#include "AreodynamicsDepartment.h"


class floorWing: public AreodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
