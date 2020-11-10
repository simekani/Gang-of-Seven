#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string>

//Abstract Template Class
class Transport {
public:
	void print();
	virtual std::string getMode() = 0;

};

#endif
