#include <exception>
using namespace std;

#ifndef __Electronics_h__
#define __Electronics_h__

#include "Parts.h"

// class Parts;
class Electronics;

class Electronics: public Parts
{

	public: void getResult();

	public: void buildPart();
};

#endif
