#include <exception>
#include <string>
using namespace std;

#include "ChassisDepartment.h"
#include "Composite_ChassisDep.h"
#include "Chassis.h"
#include "EngineeringDepartment.h"

void ChassisDepartment::buildpart(vector <float> aSpec, string aName) {
	if(aName == "Chassis"){
		_parts = new Chassis();
		_parts->buildPart();
		cout << "With specifications of"<<endl;
		for (int i = 0; i < aSpec.size(); i++){
			cout << aSpec[i] <<endl;
		}

		result = false;
		while(!result)
			EngineeringDepartment::sendPartToTesting(_parts);

		_Car->pushParts(_parts);

	}else{
		_successor->buildpart(aSpec, aName);
	}
}

// void ChassisDepartment::add(Engine aParam) {
// 	throw "Not yet implemented";
// }

// void ChassisDepartment::remove(Engine aParam) {
// 	throw "Not yet implemented";
// }

// void ChassisDepartment::getChild(int aParam) {
// 	throw "Not yet implemented";
// }

