#include "NonPriorityPallet.h"
#include <iostream>
#include <vector>
using namespace std;

NonPriorityPallet::NonPriorityPallet(Parts* part): Cargo(part){}

void NonPriorityPallet::pack() {
    cout << "Pack " << part->getName() << " into a non-priority pallet" << endl;
    parts.push_back(part);
}

void NonPriorityPallet::unpack() {
    
    /*for (vector<Parts*> iterator it = parts.begin(); it != parts.end(); ++it){
        if (*it)->getName() == part->getName()){
            cout << "Unpack " << part->getName() << " from the non-priority pallet" << endl;
            break;
        }
    }
    parts.erase(it);*/

    vector<Parts*>::iterator it = parts.begin();
    while (it != parts.end()) {
      if ((*it)->getName() == part->getName()) break;
      it++;
    }
    parts.erase(it);
}

