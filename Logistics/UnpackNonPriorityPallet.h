#ifndef UNPACKNONPRIORITYPALLET_H
#define UNPACKNONPRIORITYPALLET_H

#include "PackPallet.h"
class UnpackNonPriorityPallet : public PackPallet {
public:
	UnpackNonPriorityPallet(Cargo* );
	void execute();
};
#endif
