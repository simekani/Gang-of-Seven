#include "Logistics.h"
#include <iostream>
using namespace std;

Logistics::Logistics(){}

void Logistics::demonstrateChainOfResponsibility(){

}

void Logistics::demonstrateCommand(){
    
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