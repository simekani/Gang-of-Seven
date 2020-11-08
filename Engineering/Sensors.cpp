#include <exception>
#include <string>
using namespace std;

#include "Sensors.h"
#include "ElectronicsDepartment.h"

void Sensors::buildpart(vector <float> aSpec, string aName) {
	cout <<"installing the Sensors"<<endl;
	ElectronicsDepartment::buildpart(aSpec, aName);
}

