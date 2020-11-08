#include "SpecsBoardroom.h"

SpecsBoardroom::SpecsBoardroom() {
	
}

void SpecsBoardroom::relayDimensions(EngineeringTeam* engTeam) {
    ((EngineeringDepartment*)participants[1])->recieveSpecs(engTeam->getSpecs());
}

