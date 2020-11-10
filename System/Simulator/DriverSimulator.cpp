#include "DriverSimulator.h"


DriverSimulator::DriverSimulator() {
    
    this->CarDriver = NULL;
}

void DriverSimulator::setDriver(Driver* CarDriver) {
    
    this->CarDriver = CarDriver;
}

bool DriverSimulator::runSimulation() {
    
    cout << "Running Driver Simulator" << endl; //add driver details

    cout << "Getting driver familiar with race track" << endl;

    return rand() % 2;
}
