
#ifndef __Engine_h__
#define __Engine_h__

#include "Parts.h"
using namespace std;
// class Parts;
class Engine;

class Engine: public Parts
{

	public: void getResult();
		public: string getName(){
				return "Engine" ;
			};
	public: void buildPart();
};

#endif