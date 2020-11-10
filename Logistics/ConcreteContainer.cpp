#include "ConcreteContainer.h"
#include <iostream>
using namespace std;
//Concrete Handler
ConcreteContainer::ConcreteContainer(const char* type, int n): Container(type), numberOfContainers(n){}

void ConcreteContainer::handleRequest(int i){
    if (i >= this->numberOfContainers){
        while(i> 0){
            i--;
            pack();
        }
    }
	else{
        std::cout << "Not enough available containers. Move onto the next batch of available containers" << std::endl;
    }
	Container::handleRequest(i);
}
