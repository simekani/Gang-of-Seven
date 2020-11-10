#include "SpecsBoardroom.h"

SpecsBoardroom::SpecsBoardroom() {
	
}

void SpecsBoardroom::relayDimensions(EngineeringTeam* engTeam) {

    vector<EngineeringTeam*>::iterator it = participants.begin();

	static_cast<EngineeringDepartment*>(*it)->recieveSpecs(engTeam->getSpecs());

}


void SpecsBoardroom::addMember(EngineeringTeam* eTeam) {
    participants.push_back(eTeam); 
}
