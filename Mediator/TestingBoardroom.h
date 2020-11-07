#ifndef TESTINGBOARDROOM_H
#define TESTINGBOARDROOM_H
#include "BoardRoom.h"
class TestingBoardroom : BoardRoom {


public:
	TestingBoardroom();
	void relayModel(Car* model);
	void relayPart(Parts* part);
};

#endif
