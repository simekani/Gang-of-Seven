#include <vector>
#include <string>
using namespace std;

#ifndef __CompositeAreodynamicDepartment_h__
#define __CompositeAreodynamicDepartment_h__

#include "AreodynamicsDepartment.h"

// class AreodynamicsDepartment;
class CompositeAreodynamicDepartment;

class CompositeAreodynamicDepartment: public AreodynamicsDepartment
{
	private: vector<AreodynamicsDepartment*> subdepartments;

	public: AreodynamicsDepartment* _unnamed_AreodynamicsDepartment_;

	public: void buildpart(vector <float > &specs, string aName);

	public: void add(AreodynamicsDepartment* department);

	public: AreodynamicsDepartment* getChild(int aParam);
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