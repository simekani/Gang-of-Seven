#include "Composite_ChassisDep.h"

void Composite_ChassisDep::add(ChassisDepartment* aParam) {
	_children.push_back(aParam);
}


ChassisDepartment* Composite_ChassisDep::getChild(int aParam) {
	return _children[aParam];
}

