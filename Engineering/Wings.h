
#ifndef __Wings_h__
#define __Wings_h__

#include "Parts.h"
using namespace std;

class Wings: public Parts
{

	public: void buildPart();

	public: virtual string primitiveOperation();
};

#endif
