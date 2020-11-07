#include <exception>
#include <vector>
using namespace std;

#ifndef __Car_h__
#define __Car_h__

// #include "Parts.h"
// #include "EngineeringTeam.h"
// #include "TeamPitStop.h"
// #include "CarStorage.h"

class Parts;
class EngineeringTeam;
class TeamPitStop;
class CarStorage;
class Car;

class Car
{
	private: float _weight;
	private: float _mechanicalGrip;
	private: vector<Parts*> _carVector;
	public: EngineeringTeam* _unnamed_EngineeringTeam_;
	public: TeamPitStop* _unnamed_TeamPitStop_;
	public: CarStorage* _unnamed_CarStorage_;

	public: float getWeight();

	public: float getMechanicalGrip();

	public: void pushParts();

	public: void practice();
};

#endif
