#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

#include "../Mediator/EngineeringTeam.h"
#include "Parts.h"
#include "Car.h"
#include "ComplexSpecs.cpp"
#include "../Mediator/TestingBoardroom.h"

class Parts;

#include <vector>
#include <string>
using namespace std;

class EngineeringDepartment: public EngineeringTeam
{
	protected: 
		Parts* _parts;
		EngineeringDepartment* _successor;
		bool result;
	public: 
		Parts* _unnamed_Parts_;
		void setNext(EngineeringDepartment* aSuccessor);
		EngineeringDepartment* getNext();
		Parts* makeParts();
		void sendToTesting();
		void sendPartToTesting(Parts* aPart);
		void receiveResult(bool aResult);
		void sendModelToTesting(Car* aModel);
		virtual void buildpart(vector <float> Spec, string Name);
		void recieveSpecs(ComplexSpecs* specs);
		void assembleCar(Parts* aPart);
};

#endif
