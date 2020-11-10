#ifndef __Engine_h__
#define __Engine_h__

#include "Parts.h"
using namespace std;

class Parts;

class Engine: public Parts
{
	public: 
	void getResult(); 
	string getName();
	public: void buildPart();
};

#endif
