#ifndef TESTINGBOARDROOM_H
#define TESTINGBOARDROOM_H

#include "BoardRoom.h"
#include "../Engineering/Car.h"
#include "../Engineering/Parts.h"
#include "../Testing/TestingTeam.h"
#include "../Engineering/EngineeringDepartment.h"

#include <vector>

using namespace std;

class Parts;

//Receive result from EDept. needs to be implemented in order to test

class TestingBoardroom : public BoardRoom {

	private:

		static TestingBoardroom* instance;

	public:

		TestingBoardroom();
		~TestingBoardroom();
		static TestingBoardroom* getInstance();
		void relayModel(Car* model);
		void relayPart(Parts* part);
		void relayResult(bool result);
};

#endif
