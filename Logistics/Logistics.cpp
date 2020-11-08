#include "Logistics.h"
#include <iostream>
#include <vector>
using namespace std;

Logistics::Logistics(){}

void Logistics::demonstrateChainOfResponsibility(){

}

void Logistics::demonstrateCommand(){
    //vector<Parts*> priorityPart;
    //Parts* nonpriorityPart;
    vector<PriorityPallet*> priority;
    vector<NonPriorityPallet*> nonpriority;
    
// Receivers , Invoker
    Parts* engine = new Engine();
    PriorityPallet* enginePallet = new PriorityPallet();
    priority.push_back(enginePallet);

    Parts* chassis = new Chassis();
    PriorityPallet* chassisPallet = new PriorityPallet();
    priority.push_back(chassisPallet);

    Parts* electronic = new Electronics();
    NonPriorityPallet* eletronicPallet = new NonPriorityPallet();
    nonpriority.push_back(eletronicPallet);

    Parts* wing = new Wings();
    NonPriorityPallet* wingPallet = new NonPriorityPallet();
    nonpriority.push_back(wingPallet);

    

// Commands
//?? do i need to instantiate new commands for each receiver or can i reuse
    UnpackNonPriorityPallet* unpackNonPriorityPalletCommand;
    PackNonPriorityPallet* packNonPriorityPalletCommand;
    UnpackPriorityPallet* unpackPriorityPalletCommand;
    PackPriorityPallet* packPriorityPalletCommand;

    for (vector<PriorityPallet*>::iterator it = priority.begin(); it != priority.end(); ++it)
    {
        packNonPriorityPalletCommand = new PackNonPriorityPallet(*it);
        packNonPriorityPalletCommand->execute()
    }

    for (vector<NonPriorityPallet*>::iterator it = nonpriority.begin(); it != nonpriority.end(); ++it)
    {
        unpackNonPriorityPalletCommand = new UnpackNonPriorityPallet(*it);
        unpackNonPriorityPalletCommand->execute();
        
    }
   // UnpackNonPriorityPallet* unpackNonPriorityPalletCommand = new UnpackNonPriorityPallet();
    //PackNonPriorityPallet* packNonPriorityPalletCommand = new PackNonPriorityPallet();
    //UnpackPriorityPallet* unpackPriorityPalletCommand = new UnpackPriorityPallet();
    //PackPriorityPallet* packPriorityPalletCommand = new PackNonPriorityPallet();

/*    #include "PreparePallet.h"//Command: Receivers, Commands, Invoker
    #include "PriorityPallet.h"
    #include "NonPriorityPallet.h"

    #include "UnpackNonPriorityPallet.h"
    #include "PackNonPriorityPallet.h"
    #include "UnpackPriorityPallet.h"
    #include "PackPriorityPallet.h"

    #include "PreparePallet.h"*/
}

void Logistics::demonstrateIterator(){//make bold or whatever
    cout << "Iterator Pattern: iterate through parts in pallets then store them in the warehouse" <<endl;
    //iterate through parts in pallets then store them in the warehouse
    Warehouse* warehouse = new Warehouse();
    Iterator* iterator = warehouse->createIterator();
    warehouse->store();
}

void Logistics::demonstrateTemplate(){//check if priority or whatever.. Cargo has transport variable
    cout << "Template Pattern: used to determine transport" <<endl;
    Transport* ship = new Ship();
    ship->print();
    Transport* truck = new Truck();
    truck->print();
    Transport* plane = new Plane();
    plane->print();
}