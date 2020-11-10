#include "UnpackPriorityPallet.h"


//Concrete command
UnpackPriorityPallet::UnpackPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void UnpackPriorityPallet::execute(){
    getReceiver()->unpack();
}

