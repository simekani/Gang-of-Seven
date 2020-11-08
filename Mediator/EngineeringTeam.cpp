#include "EngineeringTeam.h"

void EngineeringTeam::changed() {
	_sendSpecs->relayDimensions(this);
}
void EngineeringTeam::EngineeringTeam::recieveTestResult(bool) override {
	// 
}
