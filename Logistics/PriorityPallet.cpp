#include "PriorityPallet.h"
#include <iostream>
using namespace std;

//Concrete Receivers
PriorityPallet::PriorityPallet(Parts* part): Cargo(part){};
void PriorityPallet::pack() {
    std::cout << "Pack " << part->getName() << " into a priority pallet" << std::endl;
    parts.push_back(part);
}

void PriorityPallet::unpack() {
    std::vector<Parts*>::iterator it = parts.begin();
    while (it != parts.end()) {
      if ((*it)->getName() == part->getName()){
        std::cout << "Unpack " << part->getName() << " from the priority pallet\n" << std::endl;
        break;
      } 
      it++;
    }
    parts.erase(it);
}

