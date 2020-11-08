#ifndef UNPACKPRIORITYPALLET_H
#define UNPACKPRIORITYPALLET_H

#include "PackPallet.h"
class UnpackPriorityPallet : PackPallet {


public:
	UnpackPriorityPallet(Cargo* );
	void execute(Parts* part);
};

#endif
