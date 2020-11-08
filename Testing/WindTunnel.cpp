#include "WindTunnel.h"

WindTunnel::WindTunnel() {

    carModel = NULL;
}

void WindTunnel::setCarModel(Car* carModel) {

    this->carModel = carModel;
}

bool WindTunnel::run() {
    
    cout << "Running wind tunnel test" << endl;

    int passed = rand() % 2;

    if (passed == 1) {

        cout << "The Car model has passed the wind tunnel testing" << endl;
    }
    else
    {
        cout << "The Car model has failed the wind tunnel testing" << endl;
    }
    
    return passed;
}