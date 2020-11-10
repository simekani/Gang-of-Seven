#include "BoardRoom.h"

BoardRoom::BoardRoom(){
    
}

void BoardRoom::addMember(EngineeringTeam* eTeam) {
	//participants.insert(participants.begin()+1, static_cast<EngineeringTeam*>(eTeam));
    participants.resize(1); 
    participants.push_back(eTeam); 
}