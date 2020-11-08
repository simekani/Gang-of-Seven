#include "TestingTeam.h"
#include "WindTunnel.h"
#include "StartPartSimulator.h"
#include "StartWindTunnel.h"
#include "PartSimulator.h"

TestingTeam::TestingTeam() {
    
	WindTunnel* windTunnel = new WindTunnel();

	startWindTunnel = new StartWindTunnel(windTunnel);

	Simulator* partSimulator = new PartSimulator();

	startSimulator = new StartPartSimulator(partSimulator);
}

void TestingTeam::sendMessage(bool result) {

	TestingBoardroom::getInstance()->relayResult(result);	
}

void TestingTeam::receiveMessage(Parts* part) {
	
		simulatePartPerformance(part); 	
		bool result = startSimulator->getResult();
		sendMessage(result);
}

void TestingTeam::recieveMessage(Car* model) {
	
		testCarModel(model); 
		bool result = startWindTunnel->getResult();
		sendMessage(result);
}

void TestingTeam::testCarModel(Car* model) {
	
	static_cast<StartWindTunnel*>(startWindTunnel)->setCarModel(model);
	static_cast<StartWindTunnel*>(startWindTunnel)->execute();
}

void TestingTeam::simulatePartPerformance(Parts* part) {
	
	static_cast<StartPartSimulator*>(startSimulator)->setPart(part);
	static_cast<StartPartSimulator*>(startSimulator)->execute();
}