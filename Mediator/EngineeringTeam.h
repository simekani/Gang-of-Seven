#ifndef ENGINEERINGTEAM_H
#define ENGINEERINGTEAM_H

class EngineeringTeam {

private:
	sendSpecs SendSpecs;

public:
	void changed();

	sendSpecs getSpecs();

	void set(sendSpecs s);
};

#endif
