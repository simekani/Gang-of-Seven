#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

#include "../Engineering/Car.h"
#include "../Mediator/EngineeringTeam.h"
#include "../Engineering/Parts.h"
#include "../Engineering/Car.h"
#include "../Engineering/ComplexSpecs.cpp"
#include "../Mediator/TestingBoardroom.h"

class Parts;
class Car;
class EngineeringTeam;
class EngineeringDepartment;

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
