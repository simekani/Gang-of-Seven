#ifndef ConcreteContainer_H
#define ConcreteContainer_H
#include "Container.h"

class ConcreteContainer : public Container {
private:
	int minutes;

public:
	ConcreteContainer(const char* type, int n);//numberOfContainers
	
	virtual void handleRequest(int i);
};

#endif
