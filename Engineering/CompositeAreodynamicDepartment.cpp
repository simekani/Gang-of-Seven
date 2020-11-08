#include <exception>
#include <string>
using namespace std;

#include "CompositeAreodynamicDepartment.h"
#include "AreodynamicsDepartment.h"

void CompositeAreodynamicDepartment::buildpart(vector <float > &specs, string aName) {
	throw "Not yet implemented";
}

void CompositeAreodynamicDepartment::add(AreodynamicsDepartment* dept) {
	subdepartments.push_back(dept);
}


AreodynamicsDepartment* CompositeAreodynamicDepartment::getChild(int dept) {
	return subdepartments[dept];
}

