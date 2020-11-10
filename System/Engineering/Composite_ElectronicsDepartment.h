#ifndef __Composite_ElectronicsDepartment_h__
#define __Composite_ElectronicsDepartment_h__

#include <vector>
#include <string>
using namespace std;

#include "ElectronicsDepartment.h"

class Composite_ElectronicsDepartment: public ElectronicsDepartment
{
	public: vector <ElectronicsDepartment* > _children;

	public: void buildpart(vector <float > &specs, string aName);

	public: void add(ElectronicsDepartment*  aParam);

	public: ElectronicsDepartment* getChild(int aParam);
};

#endif
