#ifndef PRIORITYPALLET_H
#define PRIORITYPALLET_H


#include "Cargo.h"
class PriorityPallet : public Cargo {


public:
	PriorityPallet();

	void pack(Parts* part);

	void unpack();
};

#endif
