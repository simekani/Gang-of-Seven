#include "TestingBoardroom.h"
#include "../Testing/TestingTeam.h"

TestingBoardroom* TestingBoardroom::instance;

TestingBoardroom::TestingBoardroom() {
	EngineeringTeam* TestingDepartment = new TestingTeam();
	participants.push_back(TestingDepartment);
}

TestingBoardroom::~TestingBoardroom() {
    
}

TestingBoardroom* TestingBoardroom::getInstance() {
	if (instance == NULL)
		instance = new TestingBoardroom();
	return instance;
}

void TestingBoardroom::relayModel(Car* model) {
	
	vector<EngineeringTeam*>::iterator it = participants.begin();

	static_cast<TestingTeam*>(*it)->recieveMessage(model);
}

void TestingBoardroom::relayPart(Parts* part) {
	
	vector<EngineeringTeam*>::iterator it = participants.begin();

	static_cast<TestingTeam*>(*it)->receiveMessage(part);
}

void TestingBoardroom::relayResult(bool result) {
    
	vector<EngineeringTeam*>::iterator it = participants.begin();

	++it;

	static_cast<EngineeringDepartment*>(*it)->receiveResult(result);
}
