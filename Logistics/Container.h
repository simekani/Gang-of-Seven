#ifndef CONTAINER_H
#define CONTAINER_H
#include <vector>
#include <string>

class Container  {

private:
	Container* next;
	const char*  type;

public:
	int numberOfContainers;//protected

	Container(const char*  type, int n);
	void add(Container* next);
	void handleRequest(int i);

	void pack();
	void unpack();
};

#endif
