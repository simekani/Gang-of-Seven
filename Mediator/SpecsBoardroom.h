#include <exception>
using namespace std;

#ifndef SPECSBOARDROOM_H
#define SPECSBOARDROOM_H

#include "EngineeringTeam.h"
#include "BoardRoom.h"

class EngineeringTeam;
class BoardRoom;

class SpecsBoardroom: public BoardRoom
{
	public: 
		SpecsBoardroom();
		void relayDimensions(EngineeringTeam* engTeam);
};

#endif
