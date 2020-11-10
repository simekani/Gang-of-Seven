#include "Observer.h"

/*
 * PIT STOP
 * PIT STOP
 * PIT STOP
 */

void PitStop::attach(PitCrew* _pitCrew) {
    pitCrew.push_back(_pitCrew);
    _pitCrew->registerCrew(this);
    cout << _pitCrew->getType() << " has been added to the pit stop crew." << endl;
}

void PitStop::detach(PitCrew* _pitCrew) {
    vector<PitCrew*>::iterator it = pitCrew.begin();
    while (it != pitCrew.end()) {
        if (*it == _pitCrew) {
            pitCrew.erase(it);
            cout << _pitCrew->getType() << " has been removed from the pit stop crew." << endl;
        }
        it++;
    }
}

void PitStop::notify() {
    vector<PitCrew*>::iterator it = pitCrew.begin();
    while (it != pitCrew.end()) {
        (*it)->update();
        it++;
    }
}

void PitStop::assessCars() {
    //DO SOMETHING WITH THE CARS
    notify();
}

/*
 * TEAM PIT STOP
 * TEAM PIT STOP
 * TEAM PIT STOP
 */

TeamPitStop::TeamPitStop() {
    srand(time(0));
}
TeamPitStop::~TeamPitStop() {}
Car* TeamPitStop::getCar(int index) {
    if (index >= cars.size())
        return NULL;
    
    vector<Car*>::iterator it = cars.begin();
    for (int i = 0; i <= index; i++)
        it++;
    return *it;
}

void TeamPitStop::setCars(vector<Car*> carVector) {
    cars = carVector;
}

int TeamPitStop::generateRandomNumber() {
    return (rand() % 10) + 1;
}

/*
 * PIT CREW
 * PIT CREW
 * PIT CREW
 */

void PitCrew::registerCrew(PitStop* _pitStop) {
    pitStop = _pitStop;
}

void PitCrew::setCar(Car* _car) {
    car = _car;
}

string PitCrew::getType() {
    return type;
}

/*
 * REFUELLER
 * REFUELLER
 * REFUELLER
 */

Refueller::Refueller() {
    type = "Refueller";
}

Refueller::~Refueller() {}

void Refueller::update() {
    int value = pitStop->generateRandomNumber();
    //DO SOMETHING
    if (value % 3 == 0)
        cout << car->getName() << " fuel has been refilled." << endl;
    else
        cout << car->getName() << " fuel is already sufficient. Refuel is not necessary." << endl;
}

/*
 * TYRE CHANGER
 * TYRE CHANGER
 * TYRE CHANGER
 */

TyreChanger::TyreChanger() {
    type = "Tyre Changer";
}

TyreChanger::~TyreChanger() {}

void TyreChanger::update() {
    int value = pitStop->generateRandomNumber();
    if (value % 4 == 0)
        cout << car->getName() << " tyres have all been changed." << endl;
    else
        cout << car->getName() << " tyres are in good condition. No tyre change was made." << endl;
}