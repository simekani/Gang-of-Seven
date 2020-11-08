#ifndef UNPACKNONPRIORITYPALLET_H
#define UNPACKNONPRIORITYPALLET_H

#include "PackPallet.h"
class UnpackNonPriorityPallet : PackPallet {


public:
	UnpackNonPriorityPallet(Cargo* );
	void execute(Parts* part);
};

#endif
