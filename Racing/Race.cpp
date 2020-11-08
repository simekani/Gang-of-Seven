#include "Race.h"

Race::Race() {
    srand(time(NULL));
}

Race::~Race() {}

QualifyingRace::QualifyingRace(CarStorage* _carStorage, GridOrderStore* _store) {
    carStorage = _carStorage;
    iterator = carStorage->createIterator();
    iterator->first();
    store = _store;
}

QualifyingRace::~QualifyingRace() {
    delete iterator;
}

void QualifyingRace::startRace() {
    cout << endl << "Starting Qualifying Race..." << endl;
    for (int i = 0; i < 3; i++) {
        int positionChangeCount = rand() % 5;
        iterator->first();
        CarStorage* positions = new RacingCarStorage();
        while (!iterator->isDone()) {
            positions->addCar(iterator->current());
            iterator->next();
        }
        positions->addCar(iterator->current());
        for (int j = 0; j < positionChangeCount; j++) {
            int carPositionChange1 = rand() % positions->getSize();
            int carPositionChange2 = rand() % positions->getSize();
            positions->swapCars(carPositionChange1, carPositionChange2);
        }
        GridOrder* currentGridOrder = new GridOrder();
        currentGridOrder->setPositions(positions);
        store->setStoredGridOrder(currentGridOrder);
    }
    cout << endl << "END OF QUALIFIERS" << endl;
}

FinalRace::FinalRace(CarStorage* _carStorage, GridOrderStore* _store) {
    carStorage = _carStorage;
    iterator = carStorage->createIterator();
    iterator->first();
    store = _store;
}

FinalRace::~FinalRace() {
    delete iterator;
}
void FinalRace::startRace() {
    cout << endl << "Starting Race..." << endl;
    for (int i = 0; i < 24; i++) {
        int pitStop = rand() % 150 + 1;
        if (pitStop % 12 == 0) {
            cout << "One of the teams have to enter the pit stop." << endl;
            vector<Car*> team;

            iterator->first();
            for (int i = 0; i < rand() % carStorage->getSize(); iterator->next(), i++);
            team.push_back(iterator->current());

            iterator->first();
            for (int i = 0; i < rand() % carStorage->getSize(); iterator->next(), i++);
            team.push_back(iterator->current());

            PitStop* teamPitStop = new TeamPitStop();
            teamPitStop->setCars(team);

            for (int i = 0; i < team.size(); i++) {
                PitCrew* tempRefueller = new Refueller();
                tempRefueller->setCar(team[i]);
                teamPitStop->attach(tempRefueller);

                PitCrew* tempTyreChanger = new TyreChanger();
                tempTyreChanger->setCar(team[i]);
                teamPitStop->attach(tempTyreChanger);
            }
            teamPitStop->assessCars();
        }
        int positionChangeCount = rand() % 5;
        iterator->first();
        CarStorage* positions = new RacingCarStorage();
        while (!iterator->isDone()) {
            positions->addCar(iterator->current());
            iterator->next();
        }
        positions->addCar(iterator->current());
        for (int j = 0; j < positionChangeCount; j++) {
            int carPositionChange1 = rand() % positions->getSize();
            int carPositionChange2 = rand() % positions->getSize();
            positions->swapCars(carPositionChange1, carPositionChange2);
        }
        GridOrder* currentGridOrder = new GridOrder();
        currentGridOrder->setPositions(positions);
        store->setStoredGridOrder(currentGridOrder);
    }
    cout << endl << "END OF RACE!!!" << endl;
}