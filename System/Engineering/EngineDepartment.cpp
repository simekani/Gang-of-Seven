#include "EngineDepartment.h"

void EngineDepartment::buildpart(vector <float > &specs, string aName) {
	if(aName == "Engine"){
		_parts = new Engine();
		_parts->buildPart();
		cout << "with specification:"<<endl;
		for(int i = 0; i < specs.size(); i++){
			cout << specs[i] <<endl;
		}
		result = false;
		while(!result)
			EngineeringDepartment::sendPartToTesting(_parts);

		_Car->pushParts(_parts);
	}else{
		_successor->buildpart(specs, aName);
	}
}

// void EngineDepartment::add(Engine aParam) {
// 	throw "Not yet implemented";
// }

// void EngineDepartment::remove(Engine aParam) {
// 	throw "Not yet implemented";
// }

// void EngineDepartment::getChild(int aParam) {
// 	throw "Not yet implemented";
// }

