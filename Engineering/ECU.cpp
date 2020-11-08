#include <exception>
#include <string>
using namespace std;

#include "ECU.h"
#include "ElectronicsDepartment.h"

void ECU::buildpart(vector <float> aSpec, string aName) {
		cout <<"installing the ECU"<<endl;
	ElectronicsDepartment::buildpart(aSpec, aName);
}

