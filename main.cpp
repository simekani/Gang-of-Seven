#include "Engineering/Car.h"
#include "Racing/Factory.h"
#include "Mishi/CommandAndTemplate.h"
#include "Mishi/IteratorPattern.h"

#include <stdlib.h>


#include <iostream>

using namespace std;

int main(){

    bool season = false; 

    const int CAR_COUNT = 10;
    const int points[] = {25, 18, 15, 12, 10, 8, 6, 4, 2 ,1};

    CarStorage* cars;
    GridOrderStore* raceStore ;
    
    while (true)
    {
        if(season)
        {
            cout<<"Select the option: "<<endl
            <<"1. Create new season"<<endl
            <<"2. Continue season"<<endl
            <<"3. End season"<<endl; 
            int y; 
            cin>>y; 

            if(y==0)
            {
              exit(0); 
            }

           else if(y==1)
            {
               season = false;  
            }

            else if (y ==2)
            {
                cout<<endl<<"Select the option: "<<endl
                <<"1. Determine Logistics"<<endl
                <<"2. Race"<<endl<<endl; 
                cout<<"0. quit"<<endl; 
                int val; 
                cin>>val;  

                switch(val)
                {
                    case 0: exit(0); 
                    
                    case 1: {
                        int max= (rand() % 5) + 1;
                        Container* container = new ConcreteContainer("garage",max);
                        container->add( new ConcreteContainer("office", max) );
                        container->add( new ConcreteContainer("catering", max) );
                        container->add( new ConcreteContainer("hospitality", max) );

                        int n;
                        cout << "How many containers do you want to use to transport GARAGE equipment (min " << max << ")" << endl;
                        cin >> n;
                        container->handleRequest(n);
                        cout << endl;

                        cout << "Given " << max <<" containers, how many containers do you want to use to transport OFFICE equipment (min " << max << ")" << endl;
                        cin >> n;
                        container->handleRequest(n);
                        cout << endl;

                        cout << "How many containers do you want to use to transport CATERING equipment (min  " << max << ")" << endl;
                        cin >> n;
                        container->handleRequest(n);
                        cout << endl;

                        cout << "How many containers do you want to use to transport HOSPITALITY equipment (min " << max << ")" << endl;
                        cin >> n;
                        container->handleRequest(n);
                        cout << endl;

                        container->unpack();

                        Car* car = cars->at(0);
                        Cargo* cargo;
                        PackPallet* packCommand;
                        PackPallet* unpackCommand;
                        PreparePallet* executeCommand;
                        Transport* tranport;

                        car->pushParts(new Chassis());
                        car->pushParts(new Electronics());
                        car->pushParts(new Engine());
                        car->pushParts(new Wings());

                        string name;

                        vector<Parts*> v = car->getVectorOfParts();
                        vector<Parts*>::iterator it = v.begin();
                        while(it!= v.end()){
                            name = (*it)->getName();
                            if ( (name == "Electronics") || (name == "Wing") ){

                                cargo = new PriorityPallet((*it));
                                packCommand = new PackNonPriorityPallet(cargo);
                                unpackCommand = new UnpackNonPriorityPallet(cargo);

                                cargo->transport = new Ship();
                                executeCommand = new PreparePallet(packCommand, unpackCommand);
                                executeCommand->executePack();
                                cargo->transport->print();//TEMPLATE
                                executeCommand->executeUnpack();
                                
                            }
                            else if ( (name == "Chassis") || (name == "Engine") ){
                                cargo = new PriorityPallet((*it));
                                packCommand = new PackPriorityPallet(cargo);
                                unpackCommand = new UnpackPriorityPallet(cargo);
                                
                                cargo->transport = new Plane();
                                executeCommand = new PreparePallet(packCommand, unpackCommand);
                                executeCommand->executePack();
                                cargo->transport->print();//TEMPLATE
                                executeCommand->executeUnpack();
                            }
                            it++; 
                        }

                        Warehouse* warehouse = new Warehouse();
                        AbstractIterator* iterator = warehouse->createIterator(car->getVectorOfParts());
                        warehouse->store();
                    }

                    break; 

                    case 2:{
                           // Then Race stuff can happen(Sthe main )
                        RaceFactory* q_factory = new QualifyingRaceFactory();
                        Race* qualifyingRace = q_factory->createRace(cars, raceStore);
                        qualifyingRace->startRace();

                        CarStorage* qualifyingResults = raceStore->getStoredGridOrder()->getPositions();
                        Iterator* it = qualifyingResults->createIterator();
                        it->first();
                        cout << endl << "STARTING POSITIONS" << endl << endl;
                        for (int i = 0; i < cars->getSize(); i++, it->next())
                            cout << "Position " << (i+1) << ": " << it->current()->getName() << endl;
                        delete it;

                        RaceFactory* f_factory = new FinalRaceFactory();
                        Race* finalRace = f_factory->createRace(cars, raceStore);
                        finalRace->startRace();

                        CarStorage* finalResults = raceStore->getStoredGridOrder()->getPositions();
                        it = finalResults->createIterator();
                        
                        it->first();
                        for (int i = 0; i < cars->getSize(); i++, it->next())
                            cout << "Position " << (i+1) << ": " << it->current()->getName() << " - " << points[i] << " POINTS" << endl;   

                        return 0;                        
                    }
                    break; 

                }
            }

            else{ 
                season = false; 
                  
            }
        }

        else
        { 
            // create season
            // team - Cars
            // Cars - Race strategy , eng dept,

            cout<<"Welcome to F1!"<<endl; 
            cout<<"Create a Team"<<endl;

            int budget; 
            cout<<endl<< "Enter budget for a car"<<endl; 
            cin>>budget; 

            string carName; 
            cout<<endl<< "Enter the Name your team's car"<<endl; 
            cin>>carName; 

            Car* car1 = new Car(carName,budget,true); //race strategy implemented in constructor
            
            budget+=500;
            Car* car2 = new Car("Mercades 1",budget+100,true);
            Car* car3 = new Car("Ferrari 1",budget+100,true);
            Car* car4 = new Car("Peugout 1",budget+200,true);
            Car* car5 = new Car("Honda 1",budget+300,true);
            Car* car6 = new Car("Toyata 1",budget+400,true);
            Car* car7 = new Car("Toyata 2",budget-100,true);
            Car* car8 = new Car("Honda 2",budget-200,true);
            Car* car9 = new Car("Peugout 2",budget-300,true);
            Car* car10 = new Car("Ferrari 2",budget-400,true);

            cars = new RacingCarStorage();
            raceStore = new GridOrderStore();

            cars->addCar(car1);
            cars->addCar(car2);
            cars->addCar(car3);
            cars->addCar(car4);
            cars->addCar(car5);
            cars->addCar(car6);
            cars->addCar(car7);
            cars->addCar(car8);
            cars->addCar(car9);
            cars->addCar(car10);

            season = true; 
        }

    }

    return 0;
}


