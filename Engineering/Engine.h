#include <exception>
using namespace std;

#ifndef __Engine_h__
#define __Engine_h__

#include "Parts.h"

// class Parts;
class Engine;

class Engine: public Parts
{

	public: void getResult();

	public: void buildPart();
};

#endif
