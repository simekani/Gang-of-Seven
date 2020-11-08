#include "UnpackPriorityPallet.h"

UnpackPriorityPallet::UnpackPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void UnpackPriorityPallet::execute(){
    getReceiver()->unpack();
}