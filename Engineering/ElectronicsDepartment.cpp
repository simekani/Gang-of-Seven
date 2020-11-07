#include <exception>
#include <string>
using namespace std;

#include "ElectronicsDepartment.h"
#include "Composite_ElectronicsDepartment.h"
#include "EngineeringDepartment.h"

void ElectronicsDepartment::buildpart(float* aSpec, string aName) {
		if(aName == "Engine"){
		_parts = new Engine();
		_parts->buildPart();
		cout << "with specification:"<<endl;
		for(int i = 0; i < aSpec.size(); i++){
			cout << aSpec[i] <<endl;
		}

	}else{
		_successor->buildpart(aSpec, aName);
	}
}

// void ElectronicsDepartment::add(ElectronicsDepartment aParam) {
// 	throw "Not yet implemented";
// }

// void ElectronicsDepartment::remove(ElectronicsDepartment aParam) {
// 	throw "Not yet implemented";
// }

// void ElectronicsDepartment::getChild(int aParam) {
// 	throw "Not yet implemented";
// }

