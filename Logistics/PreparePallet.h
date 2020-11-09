#ifndef PREPAREPALLET_H
#define PREPAREPALLET_H
#include "PackPallet.h"

class PreparePallet {

private:
	PackPallet* packCommand;
	PackPallet* unpackCommand;

public:
	PreparePallet(PackPallet* pack, PackPallet* unpack);
	
	void executePack();
	void executeUnpack();
};

#endif
