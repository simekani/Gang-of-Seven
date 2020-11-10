#ifndef CONTAINER_H
#define CONTAINER_H
#include <vector>
#include <string>

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

#endif
