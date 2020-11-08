#include <exception>
#include <string>
using namespace std;

#ifndef __FrontWing_h__
#define __FrontWing_h__

#include "AreodynamicsDepartment.h"

// class AreodynamicsDepartment;
class FrontWing;

class FrontWing: public AreodynamicsDepartment
{
	public: void buildpart(vector <float > &specs, string aName);
	
};

#endif
