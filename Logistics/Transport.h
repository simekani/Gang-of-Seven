#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string>

class Transport {

public:
	Transport();
	void print();
	virtual std::string getMode() = 0;

};

#endif
