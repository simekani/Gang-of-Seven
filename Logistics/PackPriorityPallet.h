#ifndef PACKPRIORITYPALLET_H
#define PACKPRIORITYPALLET_H

#include "PackPallet.h"

class PackPriorityPallet: public PackPallet{
public:
	PackPriorityPallet(Cargo* cargo);
	void execute();
};


#endif
