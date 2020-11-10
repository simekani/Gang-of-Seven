#ifndef PACKNONPRIORITYPALLET_H
#define PACKNONPRIORITYPALLET_H

#include "PackPallet.h"
//Concrete Commands
class PackNonPriorityPallet : public PackPallet{
public:
	PackNonPriorityPallet(Cargo* cargo);
	void execute();
};
#endif
