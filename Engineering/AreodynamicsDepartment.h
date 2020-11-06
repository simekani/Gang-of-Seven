#include <exception>
#include <string>
using namespace std;

#ifndef __AreodynamicsDepartment_h__
#define __AreodynamicsDepartment_h__

// #include "CompositeAreodynamicDepartment.h"
#include "EngineeringDepartment.h"

// class CompositeAreodynamicDepartment;
// class EngineeringDepartment;
class AreodynamicsDepartment;

class AreodynamicsDepartment: public EngineeringDepartment
{
	public: CompositeAreodynamicDepartment* _unnamed_CompositeAreodynamicDepartment_;

	public: void buildpart(float* aSpec, string aName);

	public: void add(Aerodynamics aParam);

	public: void remove(Aerodynamic aParam);

	public: void getChild(int aParam);
};

#endif
