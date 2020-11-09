#include <exception>
#include <vector>
using namespace std;

#ifndef __Car_h__
#define __Car_h__

#include "Parts.h"
#include "../Testing/TestingTeam.h"
#include "../Engineering/DesignTeam.h"
#include "Mediator/EngineeringTeam.h"
#include "Mediator/SpecsBoardroom.h"
#include "Mediator/TestingBoardroom.h"

#include "Engineering/Composite_ChassisDep.h"
#include "Engineering/Composite_ElectronicsDepartment.h"
#include "Engineering/Composite_EngineDepartment.h"

#include "Engineering/DesignTeam.h"
#include "Engineering/EngineDepartment.h"
#include "Engineering/ChassisDepartment.h"
#include "Engineering/EngineeringDepartment.h"
#include "Engineering/ElectronicsDepartment.h"
#include "Engineering/AerodynamicsDepartment.h"
#include "Engineering/RearWing.h"
#include "Engineering/FrontWing.h"
#include "Engineering/floorWing.h";

class Car
{
	protected: 
		float _weight;
		float _mechanicalGrip;
		string name; 
		vector<Parts*> _carVector;
		vector<EngineeringDepartment* > _EngineeringDepartments;
		TestingTeam* _testingteam;
		DesignTeam* _designteam;


	public:
		Car(int budget);
		string getName();
		string setName();
		float getWeight();
		float getMechanicalGrip();
		void pushParts(Parts* part);

};

#endif
