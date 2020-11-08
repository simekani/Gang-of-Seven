#include <exception>
#include <string>
using namespace std;

#ifndef __ChassisDepartment_h__
#define __ChassisDepartment_h__

#include "Composite_ChassisDep.h"
#include "Engine.h"
#include "EngineeringDepartment.h"

// class Composite_ChassisDep;
class Engine;
// class EngineeringDepartment;
class ChassisDepartment;

class ChassisDepartment: public EngineeringDepartment
{
	public: Composite_ChassisDep* _unnamed_Composite_ChassisDep_;

	public: void buildpart(vector <float> &aSpec, string aName);

	public: void add(Engine aParam);

	public: void remove(Engine aParam);

	public: void getChild(int aParam);
};

#endif
