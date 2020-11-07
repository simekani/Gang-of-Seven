#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

#include "../Engineering/Car.h"
#include "EngineeringTeam.h"
#include "../Engineering/Parts.h"
#include "../Engineering/Car.h"
#include "EngineeringTeam.h"
#include "../Engineering/ComplexSpecs.cpp"

class Parts;
class Car;
class EngineeringTeam;
class EngineeringDepartment;

#include <string>
using namespace std;

class EngineeringDepartment: public EngineeringTeam
{
	private: 
		Parts* _parts;
		EngineeringDepartment* _successor;
	public: 
		Parts* _unnamed_Parts_;
		void setNext(EngineeringDepartment* aSuccessor);
		EngineeringDepartment* getNext();
		Parts* makeParts();
		void sendToTesting();
		void sendPartToTesting(Parts* aPart);
		void receiveResult(bool aResult);
		void sendModelToTesting(Car* aModel);
		void buildpart(float* Spec, string Name);
		void recieveSpecs(ComplexSpecs* specs);
		void assembleCar(Parts* aPart);
};

#endif