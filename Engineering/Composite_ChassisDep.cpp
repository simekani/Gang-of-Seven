#include <exception>
#include <string>
using namespace std;

#include "Composite_ChassisDep.h"
#include "ChassisDepartment.h"

void Composite_ChassisDep::add(ChassisDepartment* aParam) {
	_children.push_back(aParam);
}


ChassisDepartment* Composite_ChassisDep::getChild(int aParam) {
	return _children[aParam];
}

