#include <exception>
#include <string>
using namespace std;

#include "combutionChamber.h"
#include "EngineDepartment.h"

void combutionChamber::buildpart(vector <float* > &specs, string aName) {
	cout <<"Building a combutionChamber"<<endl;
	EngineDepartment::buildpart(specs, aName);
}

