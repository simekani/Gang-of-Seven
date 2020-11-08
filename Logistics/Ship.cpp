#include "Ship.h"
#include <string>

Ship::Ship():Transport(){}

std::string Ship::getMode() {
	return "ship";
}
