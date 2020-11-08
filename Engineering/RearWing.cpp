#include <exception>
#include <string>
using namespace std;

#include "RearWing.h"
#include "Rear.h"

void RearWing::buildpart(vector <float > &specs, string aName) {
	if(aName == "floor"){
		_parts = new Rear();
		_parts->buildPart();
		cout << "With specifications of: "<<endl;
		for(int i = 0; i < specs.size(); i++){
			cout << specs[i] <<endl;
		}
		result = false;
		while(!result)
			EngineeringDepartment::sendPartToTesting(_parts);

		_Car->pushParts(_parts);	

	}else{
		_successor->buildpart( specs, aName);
	}
}

