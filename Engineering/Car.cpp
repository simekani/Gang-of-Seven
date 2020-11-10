#include "Car.h"
#include "ECU.h"
#include "Sensors.h"
#include "RearWing.h"
#include "FrontWing.h"

#include "../RaceStrategy/Aggressive.h"
#include "../RaceStrategy/Defensive.h"
#include "../RaceStrategy/Moderate.h"

#include "floorWing.h"
#include "Suspension.h"
#include "ignition_system.h"
#include "combustionChamber.h"

#include "DesignTeam.h"
#include "EngineDepartment.h"
#include "ChassisDepartment.h"
#include "EngineeringDepartment.h"
#include "ElectronicsDepartment.h"
#include "AerodynamicsDepartment.h"

#include "Composite_ChassisDep.h"
#include "Composite_EngineDepartment.h"
#include "Composite_ElectronicsDepartment.h" 
#include "CompositeAerodynamicsDepartment.h"

Car::Car(string sname,int budget, bool autoGenerate){

        setName(sname);
        
        if(!autoGenerate){
                //Car Specifications From Design Team

                EngineDepartment* Engine = new EngineDepartment();    
                ChassisDepartment* Chassis = new ChassisDepartment();
                ElectronicsDepartment* Electronics = new ElectronicsDepartment();
                AerodynamicsDepartment* Aerodynamics = new AerodynamicsDepartment();

                //Engineering department , chain of responsibilities
                Aerodynamics->setNext(Engine);
                Engine->setNext(Chassis);
                Chassis->setNext(Electronics);
                Electronics->setNext(Aerodynamics);

                //Creating Strategy
                cout<<"Choose Strategy:"<<endl
                <<"Aggressive"<<endl
                <<"Defensive"<<endl
                <<"Moderate"<<endl;
                string sstrategy;
                cin>>sstrategy;
                string strategyName;
                cout<<"Enter your Strategy's Name"<<endl;
                cin>>strategyName;
                composeStrategy(sstrategy,strategyName);

                if(budget > 5000){ //they have money

                //AeroDynamics Composite Design Testing
                        CompositeAerodynamicsDepartment* Aerodynamics_composite = new CompositeAerodynamicsDepartment();
                        RearWing* rearWing = new RearWing();
                        floorWing* FloorWing = new floorWing();
                        FrontWing* frontWing = new FrontWing();
                        ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(rearWing);
                        ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(FloorWing);
                        ((CompositeAerodynamicsDepartment*)Aerodynamics)->add(frontWing);

                //Engine Composite Design Testing
                        Composite_EngineDepartment* Engine_Composite = new Composite_EngineDepartment();
                        ignition_system* ignition = new ignition_system();
                        combustionChamber* CombustionChamber = new combustionChamber();
                        ((Composite_EngineDepartment*)Engine_Composite)->add(ignition);
                        ((Composite_EngineDepartment*)Engine_Composite)->add(CombustionChamber);

                //Chassis Composite Design Testing
                        Composite_ChassisDep* Chassis_composite = new Composite_ChassisDep();
                        Suspension* suspension = new Suspension();
                        ((Composite_ChassisDep*)Chassis_composite)->add(suspension);
                
                //Electronics Composite Design testing
                        Composite_ElectronicsDepartment* Electronics_composite = new Composite_ElectronicsDepartment();
                        ECU* eCU = new ECU();
                        Sensors* sensors = new Sensors();
                        ((Composite_ElectronicsDepartment*)Electronics_composite)->add(eCU);
                        ((Composite_ElectronicsDepartment*)Electronics_composite)->add(sensors);


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

        //promt for design specs
                for(int i = 0; i < 4; i++){

                        cout<<"Enter specifications for: "<<partArray[i]<<endl; 
                                cout << "Insert width: "<<endl;
                                        cin >>spec;
                                        specs.push_back(spec);
                                        
                                cout << "Insert weight: "<<endl;
                                        cin >>spec;
                                        specs.push_back(spec);

                                cout << "Insert height: "<<endl;
                                        cin >>spec;
                                        specs.push_back(spec);

                                cout << "Insert Strength: "<<endl;
                                        cin >>spec;
                                        specs.push_back(spec);
                        designSpecs->setSpecDimensions(specs);
                        designSpecs->setDepartmentName(partArray[i]);

                //Design Team Mediator Testing
                        if(((EngineeringTeam*)designTeam)->get_sendSpecs()==NULL)
                                designTeam->setBoardRoom();
                        (designTeam->get_sendSpecs())->addMember(_EngineeringDepartments[0]);
                }
               // Chassis->sendModelToTesting(this); //Car model simulation 
        }
        else{
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

                //Creating Strategy
                srand(time(NULL));
                string sstrategy;
                int strat = rand() % 3 +1;

                if(strat==1){
                        sstrategy=  "Aggressive"; 
                }
                else
                if(strat==2)
                {
                        sstrategy=  "Defensive";
                }
                else
                if(strat==3)
                {
                        sstrategy=  "Moderate";     
                }
                
                string strategyName = getName()+"'s Strategy";
                composeStrategy(sstrategy,strategyName);

                if(budget > 5000){ //they have money

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
                        EngineDepartment* CombustionChamber = new combustionChamber();
                        ((Composite_EngineDepartment*)Engine_Composite)->add(ignition);
                        ((Composite_EngineDepartment*)Engine_Composite)->add(CombustionChamber);

                //Chassis Composite Design Testing
                        EngineeringDepartment* Chassis_composite = new Composite_ChassisDep();
                        ChassisDepartment* suspension = new Suspension();
                        ((Composite_ChassisDep*)Chassis_composite)->add(suspension);
                
                //Electronics Composite Design testing
                        EngineeringDepartment* Electronics_composite = new Composite_ElectronicsDepartment();
                        ElectronicsDepartment* eCU = new ECU();
                        ElectronicsDepartment* sensors = new Sensors();
                        ((Composite_ElectronicsDepartment*)Electronics_composite)->add(eCU);
                        ((Composite_ElectronicsDepartment*)Electronics_composite)->add(sensors);

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
               

                //promt for design specs
                for(int i = 0; i < 4; i++){

                                        spec = 10.0;
                                        specs.push_back(spec);

                                        spec = 15.0;
                                        specs.push_back(spec);

                                        spec = 37.0;
                                        specs.push_back(spec);

                                        spec = 21.0;
                                        specs.push_back(spec);
                        designSpecs->setSpecDimensions(specs);
                        designSpecs->setDepartmentName(partArray[i]);

                //Design Team Mediator Testing
                        if(((EngineeringTeam*)designTeam)->get_sendSpecs()==NULL)
                                designTeam->setBoardRoom();
                        (designTeam->get_sendSpecs())->addMember(_EngineeringDepartments[0]);
                        designTeam->setSpecs(designSpecs); 
                }
                Chassis->sendModelToTesting(this);
               // Chassis->sendModelToTesting(this);   //Car Model simulation           
        }

}

float Car::getWeight() {
	combustionChamber* comb = new combustionChamber();
	return this->_weight;
}

float Car::getMechanicalGrip() {
	return this->_mechanicalGrip;
}

void Car::pushParts(Parts* part) {
	_carVector.push_back(part);
}

void Car::setName(string name){
	this->name = name;
}

void Car::composeStrategy(string Strategy, string StrategyName) {
	if(Strategy == "Aggressive")
	{
		this->Strategy = new Aggressive(StrategyName); 
	}
	else 
	if(Strategy == "Defensive")
	{
		this->Strategy = new Defensive(StrategyName); 
	}
	else 
	if(Strategy == "Moderate")
	{
		this->Strategy = new Moderate(StrategyName); 
	}
	this->Strategy->strategyBlueprint(); 
}

string Car::getName(){
        return name; 
}