#include "StartWindTunnel.h"

StartWindTunnel::StartWindTunnel(WindTunnel* tunnel) {
    
    this->tunnel = tunnel;
}

void StartWindTunnel::execute(Car* CarModel) {

    tunnel->setCarModel(CarModel);
    tunnel->run();
}