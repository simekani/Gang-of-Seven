#include "UnpackNonPriorityPallet.h"

UnpackNonPriorityPallet::UnpackNonPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void UnpackNonPriorityPallet::execute(){
    getReceiver()->unpack();
}