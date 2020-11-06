#include <exception>
#include <string>
using namespace std;

#ifndef __EngineeringDepartment_h__
#define __EngineeringDepartment_h__

// #include "Parts.h"
// #include "Car.h"
#include "EngineeringTeam.h"

class Parts;
class Car;
// class EngineeringTeam;
class EngineeringDepartment;

class EngineeringDepartment: public EngineeringTeam
{
	private: Parts* _parts;
	private: EngineeringDepartment* _successor;
	public: Parts* _unnamed_Parts_;

	public: void setNext(EngineeringDepartment* aSuccessor);

	public: EngineerDepartment* getNext();

	public: Parts* makeParts();

	public: void sendToTesting();

	public: void sendPartToTesting(Part* aPart);

	public: void receiveResult(bool aResult);

	public: void sendModelToTesting(Car* aModel);

	public: void buildpart(float* aSpec, string aName);

	public: void recieveSpecs(float* aSpec, string aName);

	public: void assembleCar(Parts* aPart);
};

#endif
