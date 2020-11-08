#include <exception>
#include <string>
using namespace std;

#include "CompositeAerodynamicsDepartment.h"
#include "AerodynamicsDepartment.h"

void CompositeAerodynamicsDepartment::buildpart(vector <float > &specs, string aName) {
	
}

void CompositeAerodynamicsDepartment::add(AerodynamicsDepartment* dept) {
	subdepartments.push_back(dept);
}


AerodynamicsDepartment* CompositeAerodynamicsDepartment::getChild(int dept) {
	return subdepartments[dept];
}

