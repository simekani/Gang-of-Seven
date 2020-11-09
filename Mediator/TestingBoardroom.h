#ifndef TESTINGBOARDROOM_H
#define TESTINGBOARDROOM_H

#include "BoardRoom.h"
#include "../Engineering/Car.h"
#include "../Engineering/Parts.h"

#include "../Engineering/EngineeringDepartment.h"

#include <vector>

using namespace std;

class Parts;

class TestingBoardroom : public BoardRoom {

	private:
		static TestingBoardroom* instance;
		TestingBoardroom();
		~TestingBoardroom();
	public:


		static TestingBoardroom* getInstance();
		void relayModel(Car* model);
		void relayPart(Parts* part);
		void relayResult(bool result);
};

#endif
