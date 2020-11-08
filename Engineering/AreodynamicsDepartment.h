#ifndef __AreodynamicsDepartment_h__
#define __AreodynamicsDepartment_h__

#include "CompositeAreodynamicDepartment.h"
#include "EngineeringDepartment.h"
#include <string>
using namespace std;

class AreodynamicsDepartment: public EngineeringDepartment
{
	public: virtual void buildpart(vector <float* > &specs, string aName) = 0;

	public: virtual void add(AreodynamicsDepartment* department) = 0;

	public: virtual AreodynamicsDepartment* getChild(int aParam) = 0;
};

#endif
