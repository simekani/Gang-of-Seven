#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <vector>

#include "PartIterator.h"//uses

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
