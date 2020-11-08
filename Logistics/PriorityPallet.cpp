#include "PriorityPallet.h"
#include <iostream>
using namespace std;

PriorityPallet::PriorityPallet(Parts* part): Cargo(part){}

void PriorityPallet::pack() {
    cout << "Pack " << part->getName() << " into a priority pallet" << endl;
    parts.push_back(part);
}

void PriorityPallet::unpack() {
    vector<Parts*>::iterator it = parts.begin();
    while (it != parts.end()) {
      if ((*it)->getName() == part->getName()) break;
      it++;
    }
    parts.erase(it);
}


