#ifndef CONTAINER_H
#define CONTAINER_H

class Container : Cargo {

private:
	Container* next;
	Vector<string> equipment;

public:
	void add(Container* container, string type);

	void assemble();
};

#endif
