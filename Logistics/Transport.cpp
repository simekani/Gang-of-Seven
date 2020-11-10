#include "Transport.h"
#include <iostream>

//Template Abstract Class
void Transport::print() {
	std::cout << "Transport the cargo using the " << this->getMode() << std::endl;
}
