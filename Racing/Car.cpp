#include "Car.h"

Car::Car(string _name) { name = _name; }
Car::~Car() {}
string Car::getName() { return name; }