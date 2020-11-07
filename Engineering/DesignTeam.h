#ifndef DESIGNTEAM_H
#define DESIGNTEAM_H

#include "../Mediator/EngineeringTeam.h"
#include "ComplexSpecs.cpp"

class DesignTeam: public EngineeringTeam{
	private:
		ComplexSpecs* currentDesignSpecs;
	public:
		ComplexSpecs* getSpecs();
		void setSpecs(ComplexSpecs* specs);
};

#endif
