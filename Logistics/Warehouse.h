#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <vector>

#include "Iterator.h"
#include "PartIterator.h"//uses

class Warehouse {

private:
	vector<Parts*> list;	
	Iterator* iterator;

public:
	Iterator* createIterator();

	void store();
};

#endif
