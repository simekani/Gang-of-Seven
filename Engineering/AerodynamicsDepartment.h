#ifndef __AerodynamicsDepartment_h__
#define __AerodynamicsDepartment_h__

#include "EngineeringDepartment.h"

#include <string>
using namespace std;

class AerodynamicsDepartment: public EngineeringDepartment
{
	public: virtual void buildpart(vector <float > &specs, string aName) ;

	public: virtual void add(AerodynamicsDepartment* department) ;

	public: virtual AerodynamicsDepartment* getChild(int aParam);
};

#endif
