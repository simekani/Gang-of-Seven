#ifndef PARTITERATOR_H
#define PARTITERATOR_H
#include <vector>

#include "Iterator.h"

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

#endif
