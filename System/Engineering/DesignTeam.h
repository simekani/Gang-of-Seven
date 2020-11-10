#ifndef DESIGNTEAM_H
#define DESIGNTEAM_H

#include "../Mediator/EngineeringTeam.h"
#include "ComplexSpecs.h"

class DesignTeam: public EngineeringTeam{
	private:
		ComplexSpecs* currentDesignSpecs;
	public:
		ComplexSpecs* getSpecs();
		void setSpecs(ComplexSpecs* specs);
};

#endif
