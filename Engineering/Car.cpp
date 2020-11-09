#include <exception>
#include <vector>
using namespace std;

#include "Car.h"
#include "Parts.h"
#include "EngineeringTeam.h"
#include "ignition_system.h"
#include "combustionChamber.h"
#include "Suspension.h"
#include "Sensors.h"
#include "ECU.h"

Car::Car(int budget){

	//Car Specifications From Design Team

    EngineeringDepartment* Engine = new EngineDepartment();    
    EngineeringDepartment* Chassis = new ChassisDepartment();
    EngineeringDepartment* Electronics = new ElectronicsDepartment();
    EngineeringDepartment* Aerodynamics = new AerodynamicsDepartment();

            //Engineering department , chain of responsibilities
    Aerodynamics->setNext(Engine);
    Engine->setNext(Chassis);
    Chassis->setNext(Electronics);
    Electronics->setNext(Aerodynamics);


        if(budget > 5000000){ //they have money

        //AeroDynamics Composite Design Testing
                EngineeringDepartment* Aerodynamics_composite = new CompositeAerodynamicsDepartment();
                AerodynamicsDepartment* rearWing = new RearWing();
                AerodynamicsDepartment* FloorWing = new floorWing();
                AerodynamicsDepartment* frontWing = new FrontWing();
                ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(rearWing);
                ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(FloorWing);
                ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(frontWing);


        //Engine Composite Design Testing
                EngineeringDepartment* Engine_Composite = new Composite_EngineDepartment();
                EngineDepartment* ignition = new ignition_system();
                //EngineDepartment* combustionChamber = new combustionChamber();
                ((Composite_EngineDepartment*)Engine_Composite)->add(ignition);
                // ((Composite_EngineDepartment*)Engine_Composite)->add(combustionChamber);

        //Chassis Composite Design Testing
                EngineeringDepartment* Chassis_composite = new Composite_ChassisDep();
                // ChassisDepartment* Suspension = new Suspension();
                // ((Composite_ChassisDep*)Chassis)->add(Suspension);
        
        //Electronics Composite Design testing
                EngineeringDepartment* Electronics_composite = new Composite_ElectronicsDepartment();
                // ElectronicsDepartment* ECU = new ECU();
                // ElectronicsDepartment* Sensors = new Sensors();
                // ((Composite_ElectronicsDepartment*)Electronics)->add(ECU);
                // ((Composite_ElectronicsDepartment*)Electronics)->add(Sensors);


                _EngineeringDepartments.push_back(Aerodynamics_composite);
                _EngineeringDepartments.push_back(Engine_Composite);
                _EngineeringDepartments.push_back(Chassis_composite);
                _EngineeringDepartments.push_back(Electronics_composite);
        
        }else{

                _EngineeringDepartments.push_back(Aerodynamics);
                _EngineeringDepartments.push_back(Engine);
                _EngineeringDepartments.push_back(Chassis);
                _EngineeringDepartments.push_back(Electronics);

        }

        ComplexSpecs* designSpecs = new ComplexSpecs();
        float spec = 0.0;
        vector <float> specs;
        string partArray[4]= {"wing", "engine", "chassis", "electronics"};
        EngineeringTeam* designTeam = new DesignTeam();
        designTeam->setSpecs(designSpecs);

    //promt for design specs
        for(int i = 0; i < 4; i++){

                for(int i = 0; i < 4; i++){
                        cout << "Insert width: ";
                                cin >>spec;
                                specs.push_back(spec);
                                
                        cout << "Insert weight: ";
                                cin >>spec;
                                specs.push_back(spec);

                        cout << "Insert height: ";
                                cin >>spec;
                                specs.push_back(spec);

                        cout << "Insert Strength: ";
                                cin >>spec;
                                specs.push_back(spec);
                }
                designSpecs->setSpecDimensions(specs);
                designSpecs->setDepartmentName(partArray[i]);

        //Design Team Mediator Testing
                if(((EngineeringTeam*)designTeam)->get_sendSpecs()==NULL)
                        designTeam->setBoardRoom();
                (designTeam->get_sendSpecs())->addMember(_EngineeringDepartments[0]);
        }


}

float Car::getWeight() {
	return this->_weight;
}

float Car::getMechanicalGrip() {
	return this->_mechanicalGrip;
}

void Car::pushParts(Parts* part) {
	_carVector.push_back(part);
}



