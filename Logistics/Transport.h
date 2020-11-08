#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string>

class Transport {

private:
	virtual string getMode() = 0;

public:
	Transport();

	void print();

};

#endif
