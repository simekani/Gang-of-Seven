#ifndef BOARDROOM_H
#define BOARDROOM_H

#include "EngineeringTeam.h"

using namespace std;
class BoardRoom {
	protected:
		vector<EngineeringTeam*> participants;

	public:
		BoardRoom();
		void addMember(EngineeringTeam* eTeam);
};

#endif