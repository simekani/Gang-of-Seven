#include "NonPriorityPallet.h"
#include <iostream>
#include <vector>
using namespace std;


//Receiver
Cargo::Cargo(Parts* part){
    this->part = part;
}

//Concrete Receivers
NonPriorityPallet::NonPriorityPallet(Parts* part): Cargo(part){};

void NonPriorityPallet::pack() {
    std::cout << "Pack " << part->getName() << " into a non-priority pallet" << std::endl;
    parts.push_back(part);
}

void NonPriorityPallet::unpack() {
    std::vector<Parts*>::iterator it = parts.begin();
    while (it != parts.end()) {
      if ((*it)->getName() == part->getName()){
        std::cout << "Unpack " << part->getName() << " from the non-priority pallet" << std::endl;
        break;
      } 
      it++;
    }
    parts.erase(it);
}