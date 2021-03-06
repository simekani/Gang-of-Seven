#ifndef __ChassisDepartment_h__
#define __ChassisDepartment_h__

#include "Engine.h"
#include "Chassis.h"
#include "EngineeringDepartment.h"

#include <vector>
#include <string>

using namespace std;

class Composite_ChassisDep;

class ChassisDepartment: public EngineeringDepartment
{
	public: Composite_ChassisDep* _unnamed_Composite_ChassisDep_;

	public: void buildpart(vector <float> &aSpec, string aName);

	public: void add(Engine aParam);

	public: void remove(Engine aParam);

	public: void getChild(int aParam);
};

#endif
