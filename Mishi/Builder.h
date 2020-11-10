#ifndef BUILDER_H
#define BUILDER_H
#include <string>

class Parts
{
	public: 
	virtual std::string getName() = 0;
};

class Chassis: public Parts
{

	public: 
	std::string getName();
};

class Electronics: public Parts
{
	public: 
	std::string getName();
};

class Engine: public Parts
{
	public: 
	std::string getName();
};

class Wings: public Parts
{
	public: 
    std::string getName();
};



#endif