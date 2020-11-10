#include "Factory.h"

QualifyingRaceFactory::QualifyingRaceFactory() {}
Race* QualifyingRaceFactory::createRace(CarStorage* _storage, GridOrderStore* _store) {
    return new QualifyingRace(_storage, _store);
}

FinalRaceFactory::FinalRaceFactory() {}
Race* FinalRaceFactory::createRace(CarStorage* _storage, GridOrderStore* _store) {
    return new FinalRace(_storage, _store);
}