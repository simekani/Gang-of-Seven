#ifndef __Electronics_h__
#define __Electronics_h__

#include "Parts.h"
using namespace std;

class Parts;

class Electronics: public Parts
{

	public: void getResult();
		public: string getName(){
				return "Electronics";
			};
	public: void buildPart();
};

#endif
