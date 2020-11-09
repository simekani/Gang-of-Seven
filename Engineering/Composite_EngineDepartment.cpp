#include <exception>
#include <string>
using namespace std;

#include "Composite_EngineDepartment.h"
#include "Engine.h"
#include "EngineDepartment.h"


void Composite_EngineDepartment::add(EngineDepartment* aParam) {
	_children.push_back(aParam);
}


EngineDepartment* Composite_EngineDepartment::getChild(int aParam) {
	return _children[aParam];
}

