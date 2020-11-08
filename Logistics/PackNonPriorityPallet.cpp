#include "PackNonPriorityPallet.h"

PackNonPriorityPallet::PackNonPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void PackNonPriorityPallet::execute(){
    getReceiver()->pack();
}