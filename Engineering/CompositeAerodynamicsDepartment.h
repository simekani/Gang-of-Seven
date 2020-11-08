#include <vector>
#include <string>
using namespace std;

#ifndef __CompositeAerodynamicsDepartment_h__
#define __CompositeAerodynamicsDepartment_h__

#include "AerodynamicsDepartment.h"

// class AerodynamicsDepartment;
class CompositeAerodynamicsDepartment;

class CompositeAerodynamicsDepartment: public AerodynamicsDepartment
{
	private: vector<AerodynamicsDepartment*> subdepartments;

	public: AerodynamicsDepartment* _unnamed_AerodynamicsDepartment_;

	public: void buildpart(vector <float > &specs, string aName);

	public: void add(AerodynamicsDepartment* department);

	public: AerodynamicsDepartment* getChild(int aParam);
};

#endif


/* 

void RearWing::buildpart(vector <float > &specs, string aName) {
	if(aName == "floor"){
		_parts = new Rear();
		_parts->buildPart();
		cout << "With specifications of: "<<endl;
		for(int i = 0; i < specs.size(); i++){
			cout << specs[i] <<endl;
		}
	}else{
		_successor->buildpart( specs, aName);
	}
}

*/