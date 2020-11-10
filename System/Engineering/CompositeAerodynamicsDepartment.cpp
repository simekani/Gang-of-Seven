#include "CompositeAerodynamicsDepartment.h"

void CompositeAerodynamicsDepartment::buildpart(vector <float > &specs, string aName) {
	
}

void CompositeAerodynamicsDepartment::add(AerodynamicsDepartment* dept) {
	subdepartments.push_back(dept);
}


AerodynamicsDepartment* CompositeAerodynamicsDepartment::getChild(int dept) {
	return subdepartments[dept];
}

