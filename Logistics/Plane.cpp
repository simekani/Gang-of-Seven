#include "Plane.h"
#include <string>
//using namespace std;

Plane::Plane(): Transport(){
}

std::string Plane::getMode() {
	return "chartered plane";
}
