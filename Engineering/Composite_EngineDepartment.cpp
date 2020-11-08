#include <exception>
#include <string>
using namespace std;

#include "Composite_EngineDepartment.h"
#include "Engine.h"
#include "EngineDepartment.h"


void Composite_EngineDepartment::add(Engine* aParam) {
	_children.push_back(aParam);
}


Engine* Composite_EngineDepartment::getChild(int aParam) {
	return _children[aParam];
}

