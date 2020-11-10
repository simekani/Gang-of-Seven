#ifndef CARGO_H
#define CARGO_H
#include <vector>

#include "Transport.h"
#include "Container.h"
#include "../Engineering/Car.h" //for the parts

//Receiver
class Cargo {
public:
	Transport* transport;
	Container* container;
	std::vector<Parts*> parts;
	Parts* part;
	Cargo(Parts* );
	virtual void pack() = 0;
	virtual void unpack() = 0;
};

#endif
