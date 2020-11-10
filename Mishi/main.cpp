#include <iostream>
#include "CommandAndTemplate.h"
#include "Car.h"
#include "IteratorPattern.h"

using namespace std;
int main(){
//Demonstrate Chain
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
    
// Demonstrate Command and Template
    Car* car = new Car();
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
    Iterator* iterator = warehouse->createIterator(car->getVectorOfParts());
    warehouse->store();
    
    /*
    delete container

    delete cargo;
    delete packCommand;
    delete unpackCommand;
    delete executeCommand;
    delete tranport;
    delete car;
    
    */

    return 0;
}