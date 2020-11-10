#include "combustionChamber.h"

combustionChamber::combustionChamber(){
	
}

void combustionChamber::buildpart(vector <float > &specs, string aName) {
	cout <<"Building a combustionChamber"<<endl;
	EngineDepartment::buildpart(specs, aName);
}

