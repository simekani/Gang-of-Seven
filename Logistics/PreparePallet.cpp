#include "PreparePallet.h"

PreparePallet::PreparePallet(PackPallet* pack, PackPallet* unpack){
	packCommand = pack;
	unpackCommand = unpack;
}
	
void PreparePallet::executePack(){
	packCommand->execute();
}

void PreparePallet::executeUnpack(){
	unpackCommand->execute();
}

