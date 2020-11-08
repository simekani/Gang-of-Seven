#include <exception>
#include <vector>
using namespace std;

#include "Car.h"
#include "Parts.h"
#include "EngineeringTeam.h"
// #include "TeamPitStop.h"
// #include "CarStorage.h"

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
	throw "Not yet implemented";
}

