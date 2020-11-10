#include "BoardRoom.h"

BoardRoom::BoardRoom(){
    
}

void BoardRoom::addMember(EngineeringTeam* eTeam) {
	participants.insert(participants.begin()+1, eTeam); 
}