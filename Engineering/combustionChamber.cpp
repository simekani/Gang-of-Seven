#include <exception>
#include <string>
using namespace std;

#include "combustionChamber.h"
#include "EngineDepartment.h"

void combustionChamber::buildpart(vector <float > &specs, string aName) {
	cout <<"Building a combustionChamber"<<endl;
	EngineDepartment::buildpart(specs, aName);
}

