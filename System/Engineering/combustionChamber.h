#ifndef __combustionChamber_h__
#define __combustionChamber_h__

#include "EngineDepartment.h"

#include <vector>
#include <string>
using namespace std;

class combustionChamber: public EngineDepartment
{
	public: combustionChamber();
	public: void buildpart(vector <float > &specs, string aName);
};

#endif
