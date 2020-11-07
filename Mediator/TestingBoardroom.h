#ifndef TESTINGBOARDROOM_H
#define TESTINGBOARDROOM_H

class TestingBoardroom : BoardRoom {


public:
	TestingBoardroom();

	void relayModel(Car* model);

	void relayPart(Part* part);
};

#endif
