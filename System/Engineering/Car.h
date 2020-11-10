#ifndef __Car_h__
#define __Car_h__

#include <vector>
using namespace std;

#include "../RaceStrategy/StrategyPack.h"

class Parts;
class EngineeringTeam;
class DesignTeam;
class SpecsBoardroom;
class EngineeringDepartment;

class Car
{
	protected: 
		float _weight;
		float _mechanicalGrip;
		string name; 
		vector<Parts*> _carVector;
		vector<EngineeringDepartment* > _EngineeringDepartments;
		DesignTeam* _designteam;
		StrategyPack* Strategy;


	public:
		Car(string sname,int budget, bool autoGenerate);
		string getName();
		float getWeight();
		float getMechanicalGrip();
		void setName(string name);	
		void pushParts(Parts* part);
		void composeStrategy(string Strategy, string StrategyName);
		std::vector<Parts*> getVectorOfParts();
		
	public: 	
		vector<EngineeringTeam*> _EngineeringTeam_;

};

#endif
