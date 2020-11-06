#include "StrategyPack.h"

int StrategyPack::getNumberOfPitstops() {
	return this->numberOfPitstops;
}

void StrategyPack::setNumberOfPitstops(int numberOfPitstops) {
	this->numberOfPitstops = numberOfPitstops;
}

int StrategyPack::getFuelAmont() {
	// TODO - implement StrategyPack::getFuelAmont
	return FuelAmont; 
}

void StrategyPack::setFuelAmont(int FuelAmont) {
	// TODO - implement StrategyPack::setFuelAmont
	this->FuelAmont = FuelAmont; 
}

Tyre** StrategyPack::getTyres() {
	// TODO - implement StrategyPack::getTyres
	return Compunds; 
}

void StrategyPack::setTyres(Tyre** Compounds) {
	// TODO - implement StrategyPack::setTyres
	this->Compunds = Compounds; 
}

string StrategyPack::getPredictedWeather() {
	// TODO - implement StrategyPack::getPredictedWeather
	return PredictedWeather; 
}

void StrategyPack::setPredictedWeather(string PredictedWeather) {
	// TODO - implement StrategyPack::setPredictedWeather
	this->PredictedWeather =PredictedWeather;  
}

string StrategyPack::getName() {
	// TODO - implement StrategyPack::getName
	return Name; 
}

void StrategyPack::setName(string Name) {
	// TODO - implement StrategyPack::setName
	this->Name= Name; 
}
