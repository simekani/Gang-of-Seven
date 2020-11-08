#include "UnpackNonPriorityPallet.h"

UnpackNonPriorityPallet::UnpackNonPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void UnpackNonPriorityPallet::execute(Parts* part){
    getReceiver()->unpack();
}