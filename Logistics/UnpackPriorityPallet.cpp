#include "UnpackPriorityPallet.h"

UnpackPriorityPallet::UnpackPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void UnpackPriorityPallet::execute(Parts* part){
    getReceiver()->unpack();
}