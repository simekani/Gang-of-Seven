#ifndef TESTINGBOARDROOM_H
#define TESTINGBOARDROOM_H

#include "BoardRoom.h"
#include "../Engineering/Parts.h"

class TestingBoardroom : public BoardRoom {
	public:
		TestingBoardroom();

		void relayModel(Car* model);

		void relayPart(Parts* part);
};

#endif
