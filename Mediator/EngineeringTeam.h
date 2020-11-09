#ifndef ENGINEERINGTEAM_H
#define ENGINEERINGTEAM_H

#include "BoardRoom.h"

#include "../Engineering/ComplexSpecs.cpp"

#include "../Engineering/Car.h"

class Parts;
class Driver;

using namespace std;

class EngineeringTeam {

	protected: 

		BoardRoom* _sendSpecs;
		BoardRoom* tBoardRoom; 
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
