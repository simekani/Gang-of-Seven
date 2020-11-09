#include "StartPartSimulator.h"

StartPartSimulator::StartPartSimulator(Simulator* simualtor) {
    this->simulator = simualtor;
}

void StartPartSimulator::setPart(Parts* part) {
    static_cast<PartSimulator*>(simulator)->setPart(part);
}

void StartPartSimulator::execute() {
    Result = static_cast<PartSimulator*>(simulator)->runSimulation();
}