#include "combustionChamber.h"

void combustionChamber::buildpart(vector <float > &specs, string aName) {
	cout <<"Building a combustionChamber"<<endl;
	EngineDepartment::buildpart(specs, aName);
}

