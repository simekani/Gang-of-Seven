#include <exception>
#include <string>
using namespace std;

#ifndef __Composite_ElectronicsDepartment_h__
#define __Composite_ElectronicsDepartment_h__

#include "ElectronicsDepartment.h"

// class ElectronicsDepartment;
class Composite_ElectronicsDepartment;

class Composite_ElectronicsDepartment: public ElectronicsDepartment
{
	public: ElectronicsDepartment* _unnamed_ElectronicsDepartment_;

	public: void buildpart(float* aSpec, string aName);

	public: void add(ElectronicsDepartment aParam);

	public: void remove(ElectronicsDepartment aParam);

	public: void getChild(int aParam);
};

#endif
