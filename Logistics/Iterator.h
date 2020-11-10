#ifndef ITERATOR_H
#define ITERATOR_H
#include "../Engineering/Parts.h"

//Iterator
class Iterator {

public:
	virtual void first() = 0;

	virtual void next() = 0;

	virtual Parts* current() = 0;

	virtual bool isDone() = 0;
};
#endif
