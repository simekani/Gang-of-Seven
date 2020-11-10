#include "CarSimulator.h"

CarSimulator::CarSimulator() {
    this->CarModelGrip = 0;
    this->CarModelWeight = 0;
}

void CarSimulator::setCarModelDetails(float PotentialGrip, float PotentialWeight) {
    
    this->CarModelGrip = PotentialGrip;
    this->CarModelWeight = PotentialWeight;
}

bool CarSimulator::runSimulation() {
    
    cout << "Running Car Model Computer Simulation" << endl;

    float CarValue = CarModelGrip + CarModelWeight / 2;

    if (CarValue >= 25) {

        return true;
    }
    else
    {
        return false;
    }
}
