#ifndef UNPACKPRIORITYPALLET_H
#define UNPACKPRIORITYPALLET_H

#include "PackPallet.h"
class UnpackPriorityPallet : public PackPallet {
public:
	UnpackPriorityPallet(Cargo* );
	void execute();
};
#endif
