#include <exception>
#include <string>
using namespace std;

#include "Composite_ElectronicsDepartment.h"
#include "ElectronicsDepartment.h"


void Composite_ElectronicsDepartment::add(ElectronicsDepartment* aParam) {
	_children.push_back(aParam);
}

ElectronicsDepartment*  Composite_ElectronicsDepartment::getChild(int aParam) {
	return _children[aParam];
}

