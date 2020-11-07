#ifndef BOARDROOM_H
#define BOARDROOM_H

class BoardRoom {

private:
	vector<EngineeringTeam*> participants;

public:
	BoardRoom();

	void addMember(EngineeringTeam* ETeam);

	void leave(int member);
};

#endif
