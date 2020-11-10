#ifndef ITERATORPATTERN_H
#define ITERATORPATTERN_H
#include "../Engineering/Chassis.h"
#include "../Engineering/Electronics.h"
#include "../Engineering/Engine.h"
#include "../Engineering/Wings.h"
#include <vector>
//Iterator
class AbstractIterator {

public:
	virtual void first() = 0;

	virtual void next() = 0;

	virtual Parts* current() = 0;

	virtual bool isDone() = 0;
};
//Concrete Iterator
class PartIterator : public AbstractIterator {
private:
	int index;
	std::vector<Parts*> list;
	
public:
	PartIterator(std::vector<Parts*> );
	void first();
	void next();
	Parts* current();
	bool isDone();
};
//Aggregate
class Warehouse {

private:	
	AbstractIterator* iterator;
	std::vector<Parts*> list;
public:
	AbstractIterator* createIterator(std::vector<Parts*> list);
	void store();
};
#endif