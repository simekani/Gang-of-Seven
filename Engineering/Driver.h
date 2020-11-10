#ifndef DRIVER_H
#define DRIVER_H

#include <string>

using namespace std;

class Driver{

	private: string _DriverName;
	public:
		Driver(string Name);
		string getDriverName();		 
};

#endif
