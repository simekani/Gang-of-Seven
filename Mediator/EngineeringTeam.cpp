#include "EngineeringTeam.h"

void EngineeringTeam::receivedDesignSpecs() {
	if(_sendSpecs==NULL)
		setBoardRoom();
	((SpecsBoardroom*)_sendSpecs)->relayDimensions(this);
}

BoardRoom* EngineeringTeam::get_sendSpecs(){
	return _sendSpecs;
}

void EngineeringTeam::setBoardRoom(){
	_sendSpecs = new SpecsBoardroom();
}
