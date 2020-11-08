#ifndef PACKPALLET_H
#define PACKPALLET_H

#include "Cargo.h"

class PackPallet{

private:
	Cargo* receiver;

protected:
	void setReceiver(Cargo* receiver);
	Cargo* getReceiver();

public:
	PackPallet(Cargo* receiver);
	virtual void execute(Parts* part) = 0;
};

#endif