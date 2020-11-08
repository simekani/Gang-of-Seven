#include "Factory.h"

QualifyingRaceFactory::QualifyingRaceFactory() {}
Race* QualifyingRaceFactory::createRace(CarStorage* _storage, GridOrderStore* _store) {
    return new QualifyingRace();
}

FinalRaceFactory::FinalRaceFactory() {}
Race* FinalRaceFactory::createRace(CarStorage* _storage, GridOrderStore* _store) {
    return new FinalRace(_storage, _store);
}