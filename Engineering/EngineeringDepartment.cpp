#include <exception>
#include <string>
using namespace std;

#include "EngineeringDepartment.h"
#include "Parts.h"
#include "Car.h"
#include "EngineeringTeam.h"

void EngineeringDepartment::setNext(EngineeringDepartment* aSuccessor) {
	throw "Not yet implemented";
}

EngineerDepartment* EngineeringDepartment::getNext() {
	throw "Not yet implemented";
}

Parts* EngineeringDepartment::makeParts() {
	throw "Not yet implemented";
}

void EngineeringDepartment::sendToTesting() {
	throw "Not yet implemented";
}

void EngineeringDepartment::sendPartToTesting(Part* aPart) {
	throw "Not yet implemented";
}

void EngineeringDepartment::receiveResult(bool aResult) {
	throw "Not yet implemented";
}

void EngineeringDepartment::sendModelToTesting(Car* aModel) {
	throw "Not yet implemented";
}

void EngineeringDepartment::buildpart(vector <float*> aSpec, string aName) {
	throw "Not yet implemented";
}

void EngineeringDepartment::recieveSpecs(vector <float*> aSpec, string aName) {
	throw "Not yet implemented";
}

void EngineeringDepartment::assembleCar(Parts* aPart) {
	throw "Not yet implemented";
}

void EngineeringDepartment::setSuccessor(EngineeringDepartment* _successor){
	this->_successor = _successor;
}
