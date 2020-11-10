#include "PartIterator.h"
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