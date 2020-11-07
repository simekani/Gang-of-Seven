#include <exception>
using namespace std;

#ifndef __EngineeringTeam_h__
#define __EngineeringTeam_h

#include "sendSpecs.h"
// #include "BoardRoom.h"
// #include "Car.h"
// #include "Driver.h"

class sendSpecs;
class BoardRoom;
class Car;
class Driver;
class EngineeringTeam;

class EngineeringTeam
{
	private: sendSpecs _sendSpecs;
	public: BoardRoom* BoardRoom_;
	public: Car* Car_;
	public: Driver* Driver_;
	public: sendSpecs* sendSpecs_;

	public: void changed();

	public: sendSpecs getSpecs();

	public: void set(sendSpecs aS);
};

#endif
