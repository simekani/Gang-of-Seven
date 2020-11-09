#ifndef SPECSBOARDROOM_H
#define SPECSBOARDROOM_H

#include "../Engineering/EngineeringDepartment.h"
#include "BoardRoom.h"

using namespace std;

class SpecsBoardroom : public BoardRoom {
	public: 
		SpecsBoardroom();
		void relayDimensions(EngineeringTeam* engTeam);
};

#endif
