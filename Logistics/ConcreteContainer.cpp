#include "ConcreteContainer.h"
#include <iostream>
using namespace std;

ConcreteContainer::ConcreteContainer(const char* type, int n): Container(type, n){}//Container(), numberOfContainers(n){}

void ConcreteContainer::handleRequest(int i){
	while(i >= this->numberOfContainers){
		if (i > 0){
			i -= this->numberOfContainers;
			pack();
		}
	}
	cout << "Store equipment in the next available container" << endl;
	Container::handleRequest(i);
}