#include "StartPartSimulator.h"

StartPartSimulator::StartPartSimulator(Simulator* simualtor) {
    
    this->simulator = simualtor;
}

void StartSimulator::setPart(Part* part) {
    
    this->part = part;
}

void StartPartSimulator::execute() {
    
    result = this->simulator->runPartSimulation(part);
}