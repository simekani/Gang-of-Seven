#ifndef PARTITERATOR_H
#define PARTITERATOR_H
#include <vector>

#include "Iterator.h"

class PartIterator : public Iterator {

private:
	int index;
	vector<Parts*> list;
	
public:
	PartIterator(vector<Parts*> );
	void first();
	void next();
	Parts* current();
	bool isDone();
};

#endif
