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
	private: Engine _children;
	public: EngineDepartment* _unnamed_EngineDepartment_;

	public: void buildpart(float* aSpec, string aName);

	public: void add(Engine aParam);

	public: void remove(Engine aParam);

	public: void getChild(int aParam);
};

#endif
