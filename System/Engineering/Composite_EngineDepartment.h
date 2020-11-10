#ifndef __Composite_EngineDepartment_h__
#define __Composite_EngineDepartment_h__

#include <vector>
#include <string>
using namespace std;

#include "Engine.h"
#include "EngineDepartment.h"

class Composite_EngineDepartment: public EngineDepartment
{
	private: vector<EngineDepartment* > _children;

	public: void buildpart(vector <float > &specs, string aName);

	public: void add(EngineDepartment* aParam);

	public: EngineDepartment* getChild(int aParam);
};

#endif
