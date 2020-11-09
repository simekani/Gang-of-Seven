#include <exception>
using namespace std;

#ifndef ENGINEERINGTEAM_H
#define ENGINEERINGTEAM_H

#include "BoardRoom.h"
#include "SpecsBoardroom.h"
#include "../Engineering/ComplexSpecs.cpp"
#include "../Engineering/Car.h"
#include "../Engineering/Driver.h"
#include "TestingBoardroom.h"

class EngineeringTeam {

	protected: 

		BoardRoom* _sendSpecs;
		TestingBoardroom* tBoardRoom; 
		void receivedDesignSpecs();
	public:

		Car* _Car;
		Driver* _Driver;
		

		virtual ComplexSpecs* getSpecs();
		virtual void setSpecs(ComplexSpecs *specs);
		BoardRoom* get_sendSpecs();
		void setBoardRoom();

		void sendMessage(bool result);
		virtual void recieveMessage(Parts* part) ;// for testing team 
		virtual void recieveMessage(Car* model) ; // for testing team 
};

#endif
