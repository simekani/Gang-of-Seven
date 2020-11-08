#include "Container.h"
#include <vector>
#include <iostream>
using namespace std;

Container::Container(const char* type, int n){
	this->type = type;
	this->numberOfContainers = n;
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
			cout << "Request can't be completed." << endl;
		}
	}
	else{
		cout << "No more available containers." << endl;
	}
}

void Container::pack(){
	cout << "Pack " << type <<  " equipment" << endl;
}

void Container::unpack(){
	cout << "Unpack " << type <<  " equipment" << endl;
}
