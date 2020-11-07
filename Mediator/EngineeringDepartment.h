#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

class EngineeringDepartment : EngineeringTeam {

public:
	Parts* parts;

	void set();

	void get();

	Parts* makeParts();

	void sendToTesting();

	void sendPartToTesting(Part* part);

	void receiveResult(bool result);

	void sendModelToTesting(Car* model);
};

#endif
