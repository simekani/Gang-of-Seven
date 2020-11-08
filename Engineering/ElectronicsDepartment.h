#include <exception>
#include <string>
using namespace std;

#ifndef __ElectronicsDepartment_h__
#define __ElectronicsDepartment_h__

// #include "Composite_ElectronicsDepartment.h"
#include "EngineeringDepartment.h"

// class Composite_ElectronicsDepartment;
// class EngineeringDepartment;
class ElectronicsDepartment;

class ElectronicsDepartment: public EngineeringDepartment
{
	public: Composite_ElectronicsDepartment* _unnamed_Composite_ElectronicsDepartment_;

	public: void buildpart(vector <float*> aSpec, string aName);

	public: void add(ElectronicsDepartment aParam);

	public: void getChild(int aParam);
};

#endif
