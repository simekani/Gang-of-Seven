#include <exception>
using namespace std;

#ifndef __EngineeringTeam_h__
#define __EngineeringTeam_h__

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
	public: BoardRoom* _unnamed_BoardRoom_;
	public: Car* _unnamed_Car_;
	public: Driver* _unnamed_Driver_;
	public: sendSpecs* _unnamed_sendSpecs_;

	public: void changed();

	public: sendSpecs getSpecs();

	public: void set(sendSpecs aS);
};

#endif
