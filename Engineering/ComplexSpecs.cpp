#include "ComplexSpecs.h"

ComplexSpecs::ComplexSpecs(){

}

void ComplexSpecs::setDepartmentName(string department){
    departmentName = department;
}

void ComplexSpecs::setSpecDimensions(vector<float> specDimensions){
    dimensions = specDimensions;
}

string ComplexSpecs::getDepartmentName(){
    return departmentName;
}

vector<float> ComplexSpecs::getSpecDimensions(){
    return dimensions;
}