#include <exception>
using namespace std;

#ifndef __ConcreteSendSpecs_h__
#define __ConcreteSendSpecs_h__

#include "sendSpecs.h"

// class sendSpecs;
class ConcreteSendSpecs;

class ConcreteSendSpecs: public sendSpecs
{
	private: EngineeringTeam* _engTeam;

	public: void notify(EngineeringTeam* aEngTeam);
};

#endif
