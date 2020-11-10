#ifndef __Car_h__
#define __Car_h__

#include <vector>
using namespace std;

#include "../RaceStrategy/StrategyPack.h"

class Parts;
class EngineeringTeam;
class TestingTeam;
class DesignTeam;
class SpecsBoardroom;
class TestingBoardroom;
class EngineeringDepartment;

class Car
{
	protected: 
		float _weight;
		float _mechanicalGrip;
		string name; 
		vector<Parts*> _carVector;
		vector<EngineeringDepartment* > _EngineeringDepartments;
		TestingTeam* _testingteam;
		DesignTeam* _designteam;
		StrategyPack* Strategy;


	public:
		Car(int budget);
		string getName();
		float getWeight();
		float getMechanicalGrip();
		void setName(string name);	
		void pushParts(Parts* part);
		void composeStrategy(string Strategy, string StrategyName);
		
	public: 	
		vector<EngineeringTeam*> _EngineeringTeam_;

};

#endif
