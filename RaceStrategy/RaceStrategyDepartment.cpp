#include "RaceStrategyDepartment.h"
#include "Aggressive.h"
#include "Defensive.h"
#include "Moderate.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

void RaceStrategyDepartment::composeStrategy(string Strategy, string StrategyName) {
	if(Strategy == "Aggressive")
	{
		this->Strategy = new Aggressive(StrategyName); 
	}
	else 
	if(Strategy == "Defensive")
	{
		this->Strategy = new Defensive(StrategyName); 
	}
	else 
	if(Strategy == "Moderate")
	{
		this->Strategy = new Moderate(StrategyName); 
	}
	this->Strategy->strategyBlueprint(); 
}

