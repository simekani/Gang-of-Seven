#include <exception>
using namespace std;

#ifndef __Chassis_h__
#define __Chassis_h__

#include "Parts.h"

// class Parts;
class Chassis;

class Chassis: public Parts
{

	public: void getResult();

	public: void buildPart();
};

#endif
