#include "Ship.h"
#include <string>
using namespace std;

Ship::Ship():Transport(){}

string Ship::getMode() {
	return "ship";
}
