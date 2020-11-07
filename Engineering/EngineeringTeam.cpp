#include "EngineeringTeam.h"

void EngineeringTeam::changed() {
	_sendSpecs->relayDimensions(this);
}