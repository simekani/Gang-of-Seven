#ifndef TESTINGTEAM_H
#define TESTINGTEAM_H
#include "../Mediator/EngineeringTeam.h"
#include "../Engineering/Parts.h"

class TestingTeam : EngineeringTeam {

private:
	Command* startWindTunnel;
	Command* turnOnWindTunnel;
	Command* turnOffWindTunnel;
	Command* turnOnSimulator;
	Command* turnOffSimulator;
	Command* startSimulator;
	
public:
	void sendMessage(bool result);

	void receiveMessage(Parts* part);

	void recieveMessage(Car* model);

	void testCarModel(Car* model);

	void simulatePartPerformance(Parts* part);
};

#endif
