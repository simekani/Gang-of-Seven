#include "NonPriorityPallet.h"
#include <iostream>
using namespace std;

NonPriorityPallet::NonPriorityPallet(){}

void NonPriorityPallet::pack(Parts* part) {
    cout << "Pack " << part->getName() << " into a non-priority pallet" << endl;
    parts.push_back(part);
}

void NonPriorityPallet::unpack() {
    cout << "Unpack Non-Priority Pallets" << endl;
    //remove fr fr??
}

