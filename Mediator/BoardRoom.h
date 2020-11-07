#include <bits/stdc++.h> 
using namespace std;

#ifndef BOARDROOM_H
#define BOARDROOM_H

#include "EngineeringTeam.h"

class BoardRoom {
	protected:
		vector<EngineeringTeam*> participants;

	public:
		BoardRoom();
		void addMember(EngineeringTeam* eTeam);
};

#endif