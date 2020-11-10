#ifndef PRIORITYPALLET_H
#define PRIORITYPALLET_H


#include "Cargo.h"
//Concrete Receivers
class PriorityPallet : public Cargo {
public:
	PriorityPallet(Parts* );
	void pack();
	void unpack();
};
#endif
