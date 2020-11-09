#include "StartCarSimulator.h"

StartCarSimulator::StartCarSimulator(Simulator* simulator) {
    
    this->simulator = simulator;
}

void StartCarSimulator::setCarModel(Car* model) {
    
    static_cast<CarSimulator*>(simulator)->setCarModelDetails(model->getMechanicalGrip(), model->getWeight());
}

void StartCarSimulator::execute() {
    
    this->Result = static_cast<CarSimulator*>(simulator)->runSimulation();
}
