#ifndef CARGO_H
#define CARGO_H
#include <vector>

#include "Transport.h"
#include "../Engineering/Chassis.h"
#include "../Engineering/Electronics.h"
#include "../Engineering/Engine.h"
#include "../Engineering/Wings.h"

class Cargo {
protected:
	Transport* transport;
	vector<Parts*> parts;

public:
	virtual void pack(Parts* part) = 0;
	virtual void unpack() = 0;
};

#endif
