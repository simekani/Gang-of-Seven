#ifndef __Composite_EngineDepartment_h__
#define __Composite_EngineDepartment_h__

#include <vector>
#include <string>
using namespace std;

#include "Engine.h"
#include "EngineDepartment.h"

class Composite_EngineDepartment: public EngineDepartment
{
	private: vector<Engine* > _children;

	public: void buildpart(vector <float > &specs, string aName);

	public: void add(Engine* aParam);

	public: Engine* getChild(int aParam);
};

#endif
