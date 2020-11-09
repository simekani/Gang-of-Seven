#ifndef __Composite_ChassisDep_h__
#define __Composite_ChassisDep_h__

#include <vector>
#include <string>
using namespace std;

#include "ChassisDepartment.h"

class Composite_ChassisDep: public ChassisDepartment
{
	private: vector <ChassisDepartment*> _children;

	public: void buildpart(vector <float> aSpec, string aName);

	public: void add(ChassisDepartment* aParam);

	public: ChassisDepartment* getChild(int aParam);
};

#endif
