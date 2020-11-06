#ifndef Aggressive_H
#define Aggressive_H

#include "StrategyPack.h"
class Aggressive : public StrategyPack {

public:
	Aggressive();
	Aggressive(string PredictedWeather);
	void strategyBlueprint();
};

#endif
