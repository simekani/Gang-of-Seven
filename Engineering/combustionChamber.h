#include <exception>
#include <string>
using namespace std;

#ifndef __combustionChamber_h__
#define __combustionChamber_h__

#include "EngineDepartment.h"

// class EngineDepartment;
class combustionChamber;

class combustionChamber: public EngineDepartment
{

	public: void buildpart(vector <float > &specs, string aName);
};

#endif
