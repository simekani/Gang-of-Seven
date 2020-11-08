#include "PriorityPallet.h"
#include <iostream>
using namespace std;

void PriorityPallet::pack(Parts* part) {
    cout << "Pack " << part->getName() << " into a priority pallet" << endl;
    parts.push_back(part);
}

void PriorityPallet::unpack() {
    cout << "Unpack Priority Pallets" << endl;
    //remove fr fr??
}


