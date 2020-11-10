#include "Simulator.h"

Simulator::Simulator(){
    
}

bool Simulator::Simulate(){
    bool tobeReturned = runSimulation();
    while(!tobeReturned){
        tobeReturned=runSimulation();
    }
    return tobeReturned;
}

bool Simulator::runSimulation() {
    return false;    
}