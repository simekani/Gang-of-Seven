#include <exception>
#include <string>
using namespace std;

#ifndef __FrontWing_h__
#define __FrontWing_h__

#include "AerodynamicsDepartment.h"

// class AreodynamicsDepartment;
class FrontWing;

class FrontWing: public AerodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
