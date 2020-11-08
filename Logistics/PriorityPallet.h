#ifndef PRIORITYPALLET_H
#define PRIORITYPALLET_H


#include "Cargo.h"
class PriorityPallet : public Cargo {

public:
	PriorityPallet(Parts* part);

	void pack();

	void unpack();
};

#endif
