#ifndef DEFENSIVE_H
#define DEFENSIVE_H
#include "StrategyPack.h"

class Defensive : public StrategyPack {


public:
	Defensive(string PredictedWeather);
	void strategyBlueprint();
};

#endif
