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
	public: vector <ElectronicsDepartment* > _children;

	public: void buildpart(vector <float* > specs, string aName);

	public: void add(ElectronicsDepartment*  aParam);

	public: ElectronicsDepartment* getChild(int aParam);
};

#endif
