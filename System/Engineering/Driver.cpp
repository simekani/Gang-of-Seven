#include "Driver.h"

Driver::Driver(string Name){
    _DriverName=Name;
}

string Driver::getDriverName(){
    return _DriverName;
}