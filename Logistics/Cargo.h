#ifndef CARGO_H
#define CARGO_H
#include <vector>

#include "Transport.h"
#include "Container.h"
#include "../Engineering/Chassis.h"
#include "../Engineering/Electronics.h"
#include "../Engineering/Engine.h"
#include "../Engineering/Wings.h"
#include "../Engineering/Parts.h"

class Cargo {
public:
	Transport* transport;
	vector<Parts*> parts;
	Parts* part;
	Container* container;

	Cargo(Parts* part);
	virtual void pack();
	virtual void unpack();
};

#endif
