#include <exception>
#include <string>
using namespace std;

#ifndef __Composite_ChassisDep_h__
#define __Composite_ChassisDep_h__

#include "ChassisDepartment.h"

// class ChassisDepartment;
class Composite_ChassisDep;

class Composite_ChassisDep: public ChassisDepartment
{
	private: vector <ChassisDepartment*> _children;

	public: void buildpart(vector <float> aSpec, string aName);

	public: void add(ChassisDepartment* aParam);

	public: ChassisDepartment* getChild(int aParam);
};

#endif
