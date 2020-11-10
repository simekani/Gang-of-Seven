#ifndef ITERATORPATTERN_H
#define ITERATORPATTERN_H
#include "Builder.h"
#include <vector>
//Iterator
class Iterator {

public:
	virtual void first() = 0;

	virtual void next() = 0;

	virtual Parts* current() = 0;

	virtual bool isDone() = 0;
};
//Concrete Iterator
class PartIterator : public Iterator {
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
	Iterator* iterator;
	std::vector<Parts*> list;
public:
	Iterator* createIterator(std::vector<Parts*> list);
	void store();
};
#endif