#include <exception>
using namespace std;

#ifndef ENGINEERINGTEAM_H
#define ENGINEERINGTEAM_H

#include "SpecsBoardroom.h"
#include "ComplexSpecs.cpp"
#include "Car.h"
#include "Driver.h"

class EngineeringTeam{
	protected: 
		SpecsBoardroom* _sendSpecs;
	
	public:
		Car* _Car;
		Driver* _Driver;
		
		void changed();
		virtual ComplexSpecs* getSpecs()=0;
		virtual void setSpecs(ComplexSpecs *specs)=0;
};

#endif
