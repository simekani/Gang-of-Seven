#include "Car.h"

float Car::getWeight() {
	return this->_weight;
}

float Car::getMechanicalGrip() {
	return this->_mechanicalGrip;
}

void Car::pushParts(Parts* part) {
	_carVector.push_back(part);
}

void Car::practice() {

}

