#include "EngineeringTeam.h"

void EngineeringTeam::receivedDesignSpecs() {
	if(_sendSpecs==NULL)
		_sendSpecs  = new SpecsBoardroom();
	_sendSpecs->relayDimensions(this);
}
