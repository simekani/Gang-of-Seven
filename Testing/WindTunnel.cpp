#include "WindTunnel.h"

WindTunnel::WindTunnel() {

    carModel = NULL;
    tokens = 400;
}

void WindTunnel::setCarModel(Car* carModel) {

    this->carModel = carModel;
}

bool WindTunnel::run() {
    
    decreaseTokens();

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

void WindTunnel::WindTunnel::decreaseTokens() {

   this->tokens--; 
}

bool WindTunnel::WindTunnel::hasTokens() {

    if (tokens > 0) {

        return true;
    }    

    return false;
}
