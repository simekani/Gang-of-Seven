#ifndef ConcreteContainer_H
#define ConcreteContainer_H
#include "Container.h"

//Concrete Handler
class ConcreteContainer : public Container {
private:
     int numberOfContainers;

public:
	ConcreteContainer(const char* type, int n);//numberOfContainers
	
	virtual void handleRequest(int i);
};


#endif
