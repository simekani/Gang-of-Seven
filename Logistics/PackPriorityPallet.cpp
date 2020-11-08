#include "PackPriorityPallet.h"

PackPriorityPallet::PackPriorityPallet(Cargo* cargo): PackPallet(cargo){}


void PackPriorityPallet::execute(){
    getReceiver()->pack();
}
