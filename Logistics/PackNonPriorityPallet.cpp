#include "PackNonPriorityPallet.h"

//Concrete Commands
PackNonPriorityPallet::PackNonPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void PackNonPriorityPallet::execute(){
    getReceiver()->pack();
}

