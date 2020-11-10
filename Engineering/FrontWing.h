#ifndef __FrontWing_h__
#define __FrontWing_h__

#include <vector>
#include <string>
using namespace std;

#include "AerodynamicsDepartment.h"
#include "Front.h"

class FrontWing: public AerodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
