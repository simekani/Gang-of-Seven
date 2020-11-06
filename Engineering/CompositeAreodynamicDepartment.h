#include <exception>
#include <string>
using namespace std;

#ifndef __CompositeAreodynamicDepartment_h__
#define __CompositeAreodynamicDepartment_h__

#include "AreodynamicsDepartment.h"

// class AreodynamicsDepartment;
class CompositeAreodynamicDepartment;

class CompositeAreodynamicDepartment: public AreodynamicsDepartment
{
	private: Aerodynamic _children;
	public: AreodynamicsDepartment* _unnamed_AreodynamicsDepartment_;

	public: void buildpart(float* aSpec, string aName);

	public: void add(Aerodynamic aParam);

	public: void remove(Aerodynamic aParam);

	public: void getChild(int aParam);
};

#endif
