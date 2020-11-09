#include <exception>
#include <string>
using namespace std;

#ifndef __Composite_EngineDepartment_h__
#define __Composite_EngineDepartment_h__

#include "Engine.h"
#include "EngineDepartment.h"

class Engine;
// class EngineDepartment;
class Composite_EngineDepartment;

class Composite_EngineDepartment: public EngineDepartment
{
	private: vector<EngineDepartment* > _children;

	public: void buildpart(vector <float > &specs, string aName);

	public: void add(EngineDepartment* aParam);

	public: EngineDepartment* getChild(int aParam);
};

#endif
