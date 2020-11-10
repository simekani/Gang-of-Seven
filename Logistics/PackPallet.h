#ifndef PACKPALLET_H
#define PACKPALLET_H

#include "Cargo.h"

//Command
class PackPallet{

private:
	Cargo* receiver;

protected:
	void setReceiver(Cargo* receiver);
	Cargo* getReceiver();

public:
	PackPallet(Cargo* receiver);
	virtual void execute() = 0;
};
#endif



