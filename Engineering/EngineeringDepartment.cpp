#include "EngineeringDepartment.h"

void EngineeringDepartment::setNext(EngineeringDepartment* aSuccessor) {
	this->_successor = aSuccessor;
}

EngineeringDepartment* EngineeringDepartment::getNext() {
	return _successor;
}

void EngineeringDepartment::sendPartToTesting(Parts* aPart) {
	
	TestingBoardroom::getInstance()->relayPart(aPart);

}

void EngineeringDepartment::receiveResult(bool aResult) {
	result = aResult;
}

void EngineeringDepartment::sendModelToTesting(Car* aModel) {

	TestingBoardroom::getInstance()->relayModel(aModel);
	
}


void EngineeringDepartment::recieveSpecs(ComplexSpecs* specs) {
	buildpart(specs->getSpecDimensions(), specs->getDepartmentName());
}

void EngineeringDepartment::assembleCar(Parts* aPart) {
	
}

