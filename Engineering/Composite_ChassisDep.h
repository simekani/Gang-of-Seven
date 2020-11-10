#ifndef __Composite_ChassisDep_h__
#define __Composite_ChassisDep_h__

#include <vector>
#include <string>

#include "ChassisDepartment.h"

using namespace std;

class Composite_ChassisDep: public ChassisDepartment
{
	private: vector <ChassisDepartment*> _children;

	public: Composite_ChassisDep();
	public: void buildpart(vector <float> aSpec, string aName);

	public: void add(ChassisDepartment* aParam);

	public: ChassisDepartment* getChild(int aParam);
};

#endif
