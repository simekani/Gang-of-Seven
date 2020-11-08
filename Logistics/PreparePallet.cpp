#include "PreparePallet.h"

PreparePallet::PreparePallet(PackPallet* command){
	this->command = command;
}

void PreparePallet::prepare() {
	command->execute;
}
