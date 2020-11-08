#include "StartWindTunnel.h"

StartWindTunnel::StartWindTunnel(WindTunnel* tunnel) {
    
    this->tunnel = tunnel;
}

void StartWindTunnel::setCarModel(Car* modelCar) {
    
    tunnel->setCarModel(modelCar);
}

void StartWindTunnel::execute() {

    tunnel->run();
}
