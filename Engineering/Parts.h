#ifndef __Parts_h__
#define __Parts_h__

#include <iostream>
using namespace std;

class Parts
{
	public: 
	virtual void buildPart() = 0;
	virtual string getName() = 0;
};

#endif
