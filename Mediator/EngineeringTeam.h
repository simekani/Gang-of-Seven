#include <exception>
using namespace std;

#ifndef ENGINEERINGTEAM_H
#define ENGINEERINGTEAM_H

#include "SpecsBoardroom.h"
#include "ComplexSpecs.cpp"
#include "Car.h"
#include "../Engineering/Driver.h"
#include "TestingBoardroom.h"

class EngineeringTeam {

	protected: 

		SpecsBoardroom* _sendSpecs;
		TestingBoardroom* tBoardRoom; 

	public:

		Car* _Car;
		Driver* _Driver;
		
		void receivedDesignSpecs();
		virtual ComplexSpecs* getSpecs();
		virtual void setSpecs(ComplexSpecs *specs);
		void sendMessage(bool result);
		virtual void recieveMessage(Parts* part) ;// for testing team 
		virtual void recieveMessage(Car* model) ; // for testing team 
};

#endif
