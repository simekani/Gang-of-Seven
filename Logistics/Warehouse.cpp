#include "Warehouse.h"
#include <iostream>
using namespace std;

Iterator* Warehouse::createIterator(std::vector<Parts*> list) {
    this->list = list;
	iterator = new PartIterator(list);
	return iterator;
}

void Warehouse::store() {
	for (iterator->first(); !iterator->isDone(); iterator->next()){
		std::cout << "store " << iterator->current()->getName() << std::endl;
	}
}