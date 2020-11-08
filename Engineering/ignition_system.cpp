#include <exception>
#include <string>
using namespace std;

#include "ignition_system.h"
#include "EngineDepartment.h"

void ignition_system::buildpart(vector <float > &specs, string aName) {
	cout <<"Building a Ignition System"<<endl;
	EngineDepartment::buildpart(specs, aName);
}

