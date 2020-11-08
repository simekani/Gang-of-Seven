#include "PackNonPriorityPallet.h"

PackNonPriorityPallet::PackNonPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void PackNonPriorityPallet::execute(Parts* part){
    getReceiver()->pack(part);
}