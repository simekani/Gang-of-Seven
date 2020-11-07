#include <exception>
#include <string>
using namespace std;

#ifndef __EngineDepartment_h__
#define __EngineDepartment_h__

// #include "Composite_EngineDepartment.h"
#include "Engine.h"
#include "EngineeringDepartment.h"

// class Composite_EngineDepartment;
class Engine;
// class EngineeringDepartment;
class EngineDepartment;

class EngineDepartment: public EngineeringDepartment
{
	public: Composite_EngineDepartment* _unnamed_Composite_EngineDepartment_;

	public: void buildpart(vector <float* > &specs, string aName);

	public: void add(Engine aParam);

	public: void remove(Engine aParam);

	public: void getChild(int aParam);
};

#endif

