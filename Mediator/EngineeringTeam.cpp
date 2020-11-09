#include "EngineeringTeam.h"
#include "SpecsBoardroom.h"

EngineeringTeam::EngineeringTeam(){

}

ComplexSpecs* EngineeringTeam::getSpecs(){
	return NULL;
}

void EngineeringTeam::setSpecs(ComplexSpecs *specs){

}

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

void EngineeringTeam::sendMessage(bool result){

}

void EngineeringTeam::recieveMessage(Parts* part){
	
}

void EngineeringTeam::recieveMessage(Car* model){
	
}
