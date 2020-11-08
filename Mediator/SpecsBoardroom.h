using namespace std;

#ifndef SPECSBOARDROOM_H
#define SPECSBOARDROOM_H

#include "EngineeringTeam.h"
#include "../Engineering/EngineeringDepartment.h"
#include "BoardRoom.h"

class SpecsBoardroom: public BoardRoom
{
	public: 
		SpecsBoardroom();
		void relayDimensions(EngineeringTeam* engTeam);
};

#endif
