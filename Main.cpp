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
#include "Engineering/floorWing.h"

#include <iostream>

using namespace std;

int main(){

    //Car Specifications From Design Team
    ComplexSpecs* designSpecs = new ComplexSpecs();

    //Design Team Mediator Testing
    EngineeringTeam* designTeam = new DesignTeam();
    designTeam->setSpecs(designSpecs);

    EngineeringDepartment* Engine = new EngineDepartment();    
    EngineeringDepartment* Chassis = new ChassisDepartment();
    EngineeringDepartment* Electronics = new ElectronicsDepartment();

    //AeroDynamics Composite Design Testing
    EngineeringDepartment* Aerodynamics = new CompositeAerodynamicsDepartment();
    AerodynamicsDepartment* rearWing = new RearWing();
    AerodynamicsDepartment* FloorWing = new floorWing();
    AerodynamicsDepartment* frontWing = new FrontWing();
    ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(rearWing);
    ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(FloorWing);
    ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(frontWing);

    return 0;
}