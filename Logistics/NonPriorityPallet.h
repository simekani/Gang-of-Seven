#ifndef NONPRIORITYPALLET_H
#define NONPRIORITYPALLET_H

#include "Cargo.h"
class NonPriorityPallet : public Cargo {


public:
	NonPriorityPallet();

	void pack(Parts* part);

	void unpack();
};

#endif
