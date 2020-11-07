#include "TestingBoardroom.h"
#include "../Testing/TestingTeam.h"
TestingBoardroom::TestingBoardroom() {
	// TODO - implement TestingBoardroom::TestingBoardroom
	participants[0] = new TestingTeam(); 
}

void TestingBoardroom::relayModel(Car* model) {
	// TODO - implement TestingBoardroom::relayModel
	participants[0]->recieveMessage(model); 
}

void TestingBoardroom::relayPart(Parts* part) {
	// TODO - implement TestingBoardroom::relayPart
	participants[0]->recieveMessage(part); 
}
