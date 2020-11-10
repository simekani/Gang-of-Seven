#include "ECU.h"

void ECU::buildpart(vector <float> aSpec, string aName) {
		cout <<"installing the ECU"<<endl;
	ElectronicsDepartment::buildpart(aSpec, aName);
}

