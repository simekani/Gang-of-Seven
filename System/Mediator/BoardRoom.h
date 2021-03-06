#ifndef BOARDROOM_H
#define BOARDROOM_H

#include <vector>

class EngineeringTeam;

using namespace std;

class BoardRoom {

	protected:
		vector<EngineeringTeam*> participants;

	public:
		BoardRoom();
		virtual void addMember(EngineeringTeam* eTeam);
};

#endif