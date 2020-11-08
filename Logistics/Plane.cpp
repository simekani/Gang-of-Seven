#include "Plane.h"
#include <string>
using namespace std;

Plane::Plane(): Transport(){
}

string Plane::getMode() {
	return "chartered plane";
}
