#include "EngineeringTeam.h"

void EngineeringTeam::receivedDesignSpecs() {
	_sendSpecs->relayDimensions(this);
}