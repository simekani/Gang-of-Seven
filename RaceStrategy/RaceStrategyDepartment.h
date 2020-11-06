#ifndef RACESTRATEGYDEPARTMENT_H
#define RACESTRATEGYDEPARTMENT_H

#include "StrategyPack.h"
using namespace std; 

class RaceStrategyDepartment {

private:
	StrategyPack* Strategy;

public:
	void composeStrategy(string Strategy, string StrategyName);
};

#endif
