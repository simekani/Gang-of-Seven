#include "Factory.h"

const int CAR_COUNT = 10;
const int points[] = {25, 18, 15, 12, 10, 8, 6, 4, 2 ,1};

void TestObserver() {
    vector<Car*> cars;
    cars.push_back(new Car("Car 1"));
    cars.push_back(new Car("Car 2"));
    cars.push_back(new Car("Car 3"));

    PitStop* Team1 = new TeamPitStop();
    Team1->setCars(cars);

    PitCrew* Refueller1 = new Refueller();
    Refueller1->setCar(cars[0]);
    Team1->attach(Refueller1);
    PitCrew* Refueller2 = new Refueller();
    Refueller2->setCar(cars[1]);
    Team1->attach(Refueller2);
    PitCrew* Refueller3 = new Refueller();
    Refueller3->setCar(cars[2]);
    Team1->attach(Refueller3);

    PitCrew* TyreChanger1 = new TyreChanger();
    TyreChanger1->setCar(cars[0]);
    Team1->attach(TyreChanger1);
    PitCrew* TyreChanger2 = new TyreChanger();
    TyreChanger2->setCar(cars[1]);
    Team1->attach(TyreChanger2);
    PitCrew* TyreChanger3 = new TyreChanger();
    TyreChanger3->setCar(cars[2]);
    Team1->attach(TyreChanger3);

    Team1->assessCars();
}

void TestIterator() {
    Car* car1 = new Car("Car 1");
    Car* car2 = new Car("Car 2");
    Car* car3 = new Car("Car 3");
    Car* car4 = new Car("Car 4");

    CarStorage* racingCarStorage = new RacingCarStorage();
    racingCarStorage->addCar(car1);
    racingCarStorage->addCar(car2);
    racingCarStorage->addCar(car3);
    racingCarStorage->addCar(car4);

    cout << "SIZE: " << racingCarStorage->getSize() << endl;

    racingCarStorage->removeCar(5);
    cout << "SIZE [AFTER INVALID REMOVE]: " << racingCarStorage->getSize() << endl;

    racingCarStorage->removeCar(2);
    cout << "SIZE [AFTER VALID REMOVE]: " << racingCarStorage->getSize() << endl;

    Iterator* it = racingCarStorage->createIterator();

    it->first();
    cout << "FIRST CAR: " << it->current()->getName() << endl;

    int i = 1;
    for (; !it->isDone(); i++) {
        cout << "CAR " << i << ": " << it->current()->getName() << endl;
        it->next();
    }
    cout << "CAR " << i << ": " << it->current()->getName() << endl;

    delete car1;
    delete car2;
    delete car3;
    delete car4;
    delete it;
}

void TestRaceAndMemento() {
    GridOrderStore* finalRaceStore = new GridOrderStore();
    CarStorage* cars = new RacingCarStorage();
    for (int i = 0; i < CAR_COUNT; cars->addCar(new Car("Car " + to_string(i+1))), i++);
    RaceFactory* factory = new FinalRaceFactory();
    Race* finalRace = factory->createRace(cars, finalRaceStore);
    finalRace->startRace();
    CarStorage* finalResults = finalRaceStore->getStoredGridOrder()->getPositions();
    Iterator* it = finalResults->createIterator();
    
    it->first();
    for (int i = 0; i < cars->getSize(); i++, it->next())
        cout << "Position " << (i+1) << ": " << it->current()->getName() << " - " << points[i] << " POINTS" << endl;
}

int main() {
    
    //TestObserver();
    //TestIterator();
    TestRaceAndMemento();

    return 0;
}
