#include "PackPriorityPallet.h"

PackPriorityPallet::PackPriorityPallet(Cargo* cargo): PackPallet(cargo){}


void PackPriorityPallet::execute(Parts* part){
    getReceiver()->pack(part);
}
