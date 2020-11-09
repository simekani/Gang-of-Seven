#include "Logistics.h"
#include <iostream>
#include <vector>
using namespace std;

Logistics::Logistics(){}

void Logistics::demonstrateChainOfResponsibility(){
    //every few races need identical containers
    cout << "Chain of Responsibility Pattern: determine how many containers can be responsible for storing diffent types of equipment" <<endl;

    int max= rand() % 5 + 1;
    Container* container = new Container("garage",max);
    container->add( new Container("office", max) );
    container->add( new Container("catering", max) );
    container->add( new Container("hospitality", max) );

    int n;
    cout << "How many containers do you want to use to transport GARAGE equipment (suggested " << max << endl;
    cin >> n;
    container->handleRequest(n);
    cout << endl;


    cout << "Given " << max <<" containers, how many containers do you want to use to transport OFFICE equipment (suggested " << max << endl;
    cin >> n;
    container->handleRequest(n);
    cout << endl;

    cout << "How many containers do you want to use to transport CATERING equipment (suggested " << max << endl;
    cin >> n;
    container->handleRequest(n);
    cout << endl;

    cout << "How many containers do you want to use to transport HOSPITALITY equipment (suggested " << max << endl;
    cin >> n;
    container->handleRequest(n);
    cout << endl;
}

void Logistics::demonstrateCommand(){
// Receivers
    Parts* chassis = new Chassis();
    Cargo* chassisPallet = new PriorityPallet(chassis);

    Parts* electronic = new Electronics();
    Cargo* eletronicPallet = new NonPriorityPallet(electronic);

    Parts* engine = new Engine();
    Cargo* enginePallet = new PriorityPallet(engine);

    Parts* wing = new Wings();
    Cargo* wingPallet = new NonPriorityPallet(wing);
  
// Commands
    PackPallet* packChassis = new PackPriorityPallet(chassisPallet);
    PackPallet* packElectronics = new PackNonPriorityPallet(eletronicPallet);
    PackPallet* packEngine = new PackPriorityPallet(enginePallet);
    PackPallet* packWing = new PackNonPriorityPallet(wingPallet);

    PackPallet* unpackChassis = new UnpackPriorityPallet(chassisPallet);
    PackPallet* unpackElectronics = new UnpackNonPriorityPallet(eletronicPallet);
    PackPallet* unpackEngine = new UnpackPriorityPallet(enginePallet);
    PackPallet* unpackWing = new UnpackNonPriorityPallet(wingPallet);

 //Invoker
    PreparePallet* executeChassis = new PreparePallet(packChassis, unpackChassis);
    PreparePallet* executeElectronic = new PreparePallet(packElectronics, unpackElectronics);
    PreparePallet* executeEngine = new PreparePallet(packEngine, unpackEngine);
    PreparePallet* executeWing = new PreparePallet(packWing, unpackWing);
    
//execute pack up
    executeWing->executePack();
    executeElectronic->executePack();
    executeEngine->executePack();
    executeChassis->executePack();

//execute unpack 
    executeWing->executeUnpack();
    executeElectronic->executeUnpack();
    executeEngine->executeUnpack();
    executeChassis->executeUnpack();
}

void Logistics::demonstrateIterator(){//make bold or whatever
    cout << "Iterator Pattern: iterate through parts in pallets then store them in the warehouse" <<endl;
    //iterate through parts in pallets then store them in the warehouse
    Warehouse* warehouse = new Warehouse();
    Iterator* iterator = warehouse->createIterator();
    warehouse->store();
}

void Logistics::demonstrateTemplate(){//check if priority or whatever.. Cargo has transport variable
    cout << "Template Pattern: used to determine mode of transport" <<endl;
    Transport* ship = new Ship();
    ship->print();
    Transport* truck = new Truck();
    truck->print();
    Transport* plane = new Plane();
    plane->print();
}