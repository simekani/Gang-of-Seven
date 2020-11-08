#ifndef TESTINGBOARDROOM_H
#define TESTINGBOARDROOM_H

#include "BoardRoom.h"
#include "../Engineering/Parts.h"
#include "../Testing/TestingTeam.h"

class Parts;

class TestingBoardroom : public BoardRoom {

public:
	TestingBoardroom();
	void relayModel(Car* model);
	void relayPart(Parts* part);
};

#endif
