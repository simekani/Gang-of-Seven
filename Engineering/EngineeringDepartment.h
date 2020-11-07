#include <exception>
#include <string>
#include <typeinfo>
using namespace std;

#ifndef __EngineeringDepartment_h__
#define __EngineeringDepartment_h__

#include "Parts.h"
#include "Car.h"
#include "EngineeringTeam.h"

class EngineeringDepartment: public EngineeringTeam
{
	public : Parts* _parts;

	public: EngineeringDepartment* _successor;

	public: Parts* _unnamed_Parts_;

	public: void setNext(EngineeringDepartment* aSuccessor);

	public: EngineeringDepartment* getNext();

	public: Parts* makeParts();

	public: void sendToTesting();

	public: void sendPartToTesting(Parts* aPart);

	public: void receiveResult(bool aResult);

	public: void sendModelToTesting(Car* aModel);

	public: virtual void buildpart(vector <float*> aSpec, string aName);

	public: void recieveSpecs(vector <float*> aSpec, string aName);

	public: void assembleCar(Parts* aPart);

	public: void setSuccessor(EngineeringDepartment* _successor);
};
#endif
