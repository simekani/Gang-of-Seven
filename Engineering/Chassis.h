#ifndef __Chassis_h__
#define __Chassis_h__

#include "Parts.h"
using namespace std;

class Parts;

class Chassis: public Parts
{

	public: void getResult();
	public: string getName(){
				return "Chassis" ;
			};
	public: void buildPart();
};

#endif
