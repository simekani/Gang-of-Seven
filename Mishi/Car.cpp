#include "Car.h"

void Car::pushParts(Parts* part) {
	_carVector.push_back(part);
}

std::vector<Parts*> Car::getVectorOfParts(){
    return _carVector;
}