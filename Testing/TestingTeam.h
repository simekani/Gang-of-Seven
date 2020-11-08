#ifndef TESTINGTEAM_H
#define TESTINGTEAM_H

#include "../Mediator/EngineeringTeam.h"
#include "../Engineering/Parts.h"
#include "Command.h"


class TestingTeam : public EngineeringTeam {

private:
	Command* startWindTunnel;
	Command* startSimulator;
	
public:

	TestingTeam();
	
	void sendMessage(bool result);

	void receiveMessage(Parts* part);

	void recieveMessage(Car* model);

	void testCarModel(Car* model);

	void simulatePartPerformance(Parts* part);
};

#endif