#include "IteratorPattern.h"
#include <iostream>
PartIterator::PartIterator(std::vector<Parts*> list){
    this->list = list;
}

void PartIterator::first() { index = 0;}

void PartIterator::next() { 
    if (isDone()){    
        index++;
        return;
    }
}

Parts* PartIterator::current() {    return this->list[index];}

bool PartIterator::isDone() { 
    return (index <= list.size());
}

AbstractIterator* Warehouse::createIterator(std::vector<Parts*> list) {
    this->list = list;
	iterator = new PartIterator(list);
	return iterator;
}

void Warehouse::store() {
	for (iterator->first(); !iterator->isDone(); iterator->next()){
		std::cout << "store " << iterator->current()->getName() << std::endl;
	}
}