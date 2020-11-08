#include "Transport.h"
#include <iostream>
//using namespace std;//

Transport::Transport() {}

void Transport::print() {
	std::cout << "Transport the cargo using the " << this->getMode() << std::endl;
}
