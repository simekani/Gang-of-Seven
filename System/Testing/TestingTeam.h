#ifndef TESTINGTEAM_H
#define TESTINGTEAM_H

#include "../Mediator/EngineeringTeam.h"
#include "../Engineering/Parts.h"
#include "Command.h"
#include "WindTunnel.h"

class TestingTeam : public EngineeringTeam {

private:
	Command* startWindTunnel;
	Command* startPartSimulator;
	Command* startCarSimulator;

	string testNamePerformed;
	
public:

	TestingTeam();

	~TestingTeam();
	
	void sendMessage(bool result);

	void receiveMessage(Parts* part);

	void recieveMessage(Car* model);

	void testCarModel(Car* model);

	void simulatePartPerformance(Parts* part);
};

#endif