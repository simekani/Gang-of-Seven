#include "Warehouse.h"
#include <iostream>
using namespace std;

Warehouse::Warehouse(){}

Iterator* Warehouse::createIterator() {
	iterator = new PartIterator(list);
	return iterator;
}

void Warehouse::store() {
	for (iterator->first(); !iterator->isDone(); iterator->next()){
		cout << "store " << iterator->current()->getName() << endl;
	}

}
