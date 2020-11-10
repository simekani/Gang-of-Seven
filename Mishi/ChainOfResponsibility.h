#ifndef CHAINOFRESPONSIBILITY_H
#define CHAINOFRESPONSIBILITY_H
//Handler
    class Container {
    private:
        Container* next;
        const char*  type;

    public:
        Container(const char*  type);
        void add(Container* next);
        virtual void handleRequest(int i);

        void pack();
        void unpack();
    };

//Concrete Handler
class ConcreteContainer : public Container {
private:
     int numberOfContainers;

public:
	ConcreteContainer(const char* type, int n);//numberOfContainers
	
	virtual void handleRequest(int i);
};

#endif
