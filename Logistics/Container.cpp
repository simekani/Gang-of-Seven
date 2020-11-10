#include "Container.h"
#include <vector>
#include <iostream>
using namespace std;

//Handler
Container::Container(const char* type){
    this->next = NULL;
	this->type = type;
}

void Container::add(Container* next){
	if (this->next){
		this->next->add(next);
	}
	else{
		this->next = next;
	}
}


void Container::handleRequest(int i){
	if (i > 0){
		if (this->next){
			this->next->handleRequest(i);
		}
		else{
			std::cout << "Container is unavailable. Request to pack cannot be completed" << std::endl;
		}
	}
	else{
		std::cout << "Request completed. All requested containers are packed." << std::endl;
	}
}

void Container::pack(){
	std::cout << "Pack equipment." << std::endl;
}

void Container::unpack(){
	std::cout << "Transport the container using the Truck, unpack all equipment upon arrival and store" << std::endl;
}
