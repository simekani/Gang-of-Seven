#include <exception>
using namespace std;

#ifndef ENGINEERINGTEAM_H
#define ENGINEERINGTEAM_H

#include "SpecsBoardroom.h"
#include "../Engineering/ComplexSpecs.cpp"
#include "../Engineering/Car.h"
#include "../Engineering/Driver.h"

class EngineeringTeam{
	protected: 
		SpecsBoardroom* _sendSpecs;
	
	public:
		Car* _Car;
		Driver* _Driver;
		
		void receivedDesignSpecs();
		virtual ComplexSpecs* getSpecs()=0;
		virtual void setSpecs(ComplexSpecs *specs)=0;
};

#endif
