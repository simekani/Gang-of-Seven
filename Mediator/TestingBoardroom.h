#ifndef TESTINGBOARDROOM_H
#define TESTINGBOARDROOM_H

#include "BoardRoom.h"

//Receive result from EDept. needs to be implemented in order to test

class TestingBoardroom : public BoardRoom {

	private:

		static TestingBoardroom* instance;
		TestingBoardroom();

	public:

		~TestingBoardroom();
		static TestingBoardroom* getInstance();
		void relayModel(Car* model);
		void relayPart(Parts* part);
		void relayResult(bool result);
};

#endif
