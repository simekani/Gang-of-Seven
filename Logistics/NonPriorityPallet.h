#ifndef NONPRIORITYPALLET_H
#define NONPRIORITYPALLET_H

#include "Cargo.h"
class NonPriorityPallet : public Cargo {


public:
	NonPriorityPallet(Parts* );

	void pack();

	void unpack();
};

#endif