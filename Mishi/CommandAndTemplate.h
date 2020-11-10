#ifndef COMMANDANDTEMPLATE_H
#define COMMANDANDTEMPLATE_H
#include "../Engineering/Chassis.h"
#include "../Engineering/Electronics.h"
#include "../Engineering/Engine.h"
#include "../Engineering/Wings.h"
#include "ChainOfResponsibility.h"
#include <vector>

//Abstract Template Class
class Transport {
public:
	void print();
	virtual std::string getMode() = 0;

};

//Concrete Template Class
class Ship : public Transport {
public:
	std::string getMode();
};

class Truck : public Transport {
public:
	std::string getMode();
};

class Plane : public Transport {
public:
	std::string getMode();
};

//Receiver
class Cargo {
public:
	Transport* transport;
	Container* container;
	std::vector<Parts*> parts;
	Parts* part;
	Cargo(Parts* );
    //??Instead of virtual use scope resolution
	virtual void pack() = 0;
	virtual void unpack() = 0;
};

//Concrete Receivers
class PriorityPallet : public Cargo {
public:
	PriorityPallet(Parts* );
	void pack();
	void unpack();
};

class NonPriorityPallet : public Cargo {
public:
	NonPriorityPallet(Parts* );
	void pack();
	void unpack();
};

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

//Concrete Commands
class PackNonPriorityPallet : public PackPallet{
public:
	PackNonPriorityPallet(Cargo* cargo);
	void execute();
};

class PackPriorityPallet: public PackPallet{
public:
	PackPriorityPallet(Cargo* cargo);
	void execute();
};

class UnpackPriorityPallet : public PackPallet {
public:
	UnpackPriorityPallet(Cargo* );
	void execute();
};

class UnpackNonPriorityPallet : public PackPallet {
public:
	UnpackNonPriorityPallet(Cargo* );
	void execute();
};

//Invoker
class PreparePallet {
private:
	PackPallet* packCommand;
	PackPallet* unpackCommand;
public:
	PreparePallet(PackPallet* pack, PackPallet* unpack);
	void executePack();
	void executeUnpack();
};

#endif