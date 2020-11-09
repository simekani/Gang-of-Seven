#include "TestingTeam.h"

#include "StartWindTunnel.h"
#include "StartPartSimulator.h"
#include "StartCarSimulator.h"
#include "../Mediator/TestingBoardroom.h"

TestingTeam::TestingTeam() {
    
	WindTunnel* windTunnel = new WindTunnel();

	startWindTunnel = new StartWindTunnel(windTunnel);

	Simulator* partSimulator = new PartSimulator();

	startPartSimulator = new StartPartSimulator(partSimulator);

	Simulator* carSimulator = new CarSimulator();

	startCarSimulator = new StartCarSimulator(carSimulator);
}

TestingTeam::~TestingTeam() {
    
	delete startWindTunnel;
	delete startCarSimulator;
	delete startPartSimulator;
}

void TestingTeam::sendMessage(bool result) {

	TestingBoardroom::getInstance()->relayResult(result);	
}

void TestingTeam::receiveMessage(Parts* part) {
	
		simulatePartPerformance(part); 	
		bool result = startPartSimulator->getResult();
		sendMessage(result);
}

void TestingTeam::recieveMessage(Car* model) {
	
	testCarModel(model); 
	
	bool result;

	if (testNamePerformed == "wind-tunnel")
		result = startWindTunnel->getResult();
	else
		result = startCarSimulator->getResult();
	
	sendMessage(result);	
}

void TestingTeam::testCarModel(Car* model) {
	
	if (static_cast<StartWindTunnel*>(startWindTunnel)->isUsable() == true) {

		this->testNamePerformed = "wind-tunnel";
		static_cast<StartWindTunnel*>(startWindTunnel)->setCarModel(model);
		static_cast<StartWindTunnel*>(startWindTunnel)->execute();
	}
	else
	{
		this->testNamePerformed = "car-simulate";
		static_cast<StartCarSimulator*>(startCarSimulator)->setCarModel(model);
		static_cast<StartCarSimulator*>(startCarSimulator)->execute();
	}
}

void TestingTeam::simulatePartPerformance(Parts* part) {
	
	static_cast<StartPartSimulator*>(startPartSimulator)->setPart(part);
	static_cast<StartPartSimulator*>(startPartSimulator)->execute();
}