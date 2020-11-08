#include "TestingBoardroom.h"

TestingBoardroom::TestingBoardroom() {

}

void TestingBoardroom::relayModel(Car* model) {
  participants[0] = new TestingTeam();
}

void TestingBoardroom::relayPart(Parts* part) {
  participants[0]->recieveMessage(part); 
}
