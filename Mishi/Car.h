#ifndef CAR_H
#define CAR_H
#include <vector>
#include "Builder.h"
class Car
{ 
	private:
        std::vector<Parts*> _carVector;
	public: 
		void pushParts(Parts* part);
		std::vector<Parts*> getVectorOfParts();
};
#endif 