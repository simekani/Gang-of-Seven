#ifndef __Car_h__
#define __Car_h__

#include <vector>
using namespace std;

class Parts;
class EngineeringTeam;
class TestingTeam;
class DesignTeam;
class SpecsBoardroom;
class TestingBoardroom;

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


	public:
		Car(int budget);
		string getName();
		string setName();
		float getWeight();
		float getMechanicalGrip();
		void pushParts(Parts* part);

	private: 	float _weight;
	private: 	float _mechanicalGrip;
	private: 	vector<Parts*> _carVector;
	public: 	vector<EngineeringTeam*> _EngineeringTeam_;

	public: float getWeight();

	public: float getMechanicalGrip();

	public: void pushParts(Parts* part);

};

#endif
