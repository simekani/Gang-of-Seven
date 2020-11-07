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
	private: ChassisDepartment _children;
	public: ChassisDepartment* _unnamed_ChassisDepartment_;

	public: void buildpart(float* aSpec, string aName);

	public: void add(chassisDepartment aParam);

	public: void remove(ChassisDepartment aParam);

	public: void getChild(int aParam);
};

#endif
