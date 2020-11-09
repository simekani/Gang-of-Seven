#ifndef __floorWing_h__
#define __floorWing_h__

#include "AerodynamicsDepartment.h"
#include "Floor.h"

#include <vector>
#include <string>
using namespace std;

class floorWing: public AerodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
