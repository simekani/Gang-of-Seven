#ifndef PREPAREPALLET_H
#define PREPAREPALLET_H

class PackPallet;

class PreparePallet {

private:
	PackPallet* command;

public:
	PreparePallet(PackPallet* command);
	
	void prepare();
};

#endif
