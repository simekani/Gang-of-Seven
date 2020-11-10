#include "PackPriorityPallet.h"

//Concrete command
PackPriorityPallet::PackPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void PackPriorityPallet::execute(){
    getReceiver()->pack();
}