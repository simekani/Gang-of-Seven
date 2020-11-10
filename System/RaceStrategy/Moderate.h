#ifndef MODERATE_H
#define MODERATE_H
#include "StrategyPack.h"

class Moderate : public StrategyPack {

public:
	Moderate(string PredictedWeather);
	void strategyBlueprint();
};

#endif
