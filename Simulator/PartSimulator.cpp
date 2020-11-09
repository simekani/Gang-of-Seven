#include "PartSimulator.h"

PartSimulator::PartSimulator() {
    
    this->part = NULL;
}

void PartSimulator::setPart(Parts* part) {
    
    this->part = part;
}

bool PartSimulator::runSimulation() {
    
    cout << "Running part simulator on ..." << endl; //add parts name in cout


    return rand() % 2;
}