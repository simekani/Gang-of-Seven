#include "PackPallet.h"

PackPallet::PackPallet(Cargo* receiver) {
	this->receiver = receiver;
}

void PackPallet::setReceiver(Cargo* receiver){
	this->receiver = receiver;
}

Cargo* PackPallet::getReceiver(){
	return receiver;
}
