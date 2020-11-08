
#ifndef __Wings_h__
#define __Wings_h__

#include "Parts.h"
using namespace std;

class Parts;

class Wings: public Parts
{

	public: void buildPart();
	
	public: string getName(){
				return "Wing" ;
			};
	public: virtual string primitiveOperation();
};

#endif
