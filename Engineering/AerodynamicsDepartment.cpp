#include "AerodynamicsDepartment.h"
#include "Front.h"
#include "Floor.h"
#include "Rear.h"

void AerodynamicsDepartment::buildpart(vector <float > &specs, string aName){
    	if(aName == "wing"){
            _parts = new Floor();
            _parts->buildPart();
                cout << "With specifications of: "<<endl;
            for(int i = 0; i < specs.size(); i++){
                cout << specs[i] <<endl;
            }
            result = false;
            while(!result)
                EngineeringDepartment::sendPartToTesting(_parts);

            _Car->pushParts(_parts);

            _parts = new Front();
            _parts->buildPart();
                cout << "With specifications of: "<<endl;
            for(int i = 0; i < specs.size(); i++){
                cout << specs[i] <<endl;
            }
            result = false;
            while(!result)
                EngineeringDepartment::sendPartToTesting(_parts);

            _Car->pushParts(_parts);

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

void AerodynamicsDepartment::add(AerodynamicsDepartment* department){
    
}

AerodynamicsDepartment* AerodynamicsDepartment::getChild(int aParam){
    return NULL;
}
