#ifndef STRATEGYPACK_H
#define STRATEGYPACK_H

#include <iostream>
#include <string> 
#include "Tyre.h"
using namespace std; 

class StrategyPack {

protected:
	string PredictedWeather;
	Tyre** Compunds;
	int FuelAmont;
	int numberOfPitstops;
	string Name;

public:
	int getNumberOfPitstops();

	void setNumberOfPitstops(int numberOfPitstops);

	int getFuelAmont();

	void setFuelAmont(int FuelAmont);

	Tyre** getTyres();

	void setTyres(Tyre** Compounds);

	string getPredictedWeather();

	void setPredictedWeather(string PredictedWeather);

	string getName();

	void setName(string Name);

	virtual void strategyBlueprint() =0 ;
};

#endif
