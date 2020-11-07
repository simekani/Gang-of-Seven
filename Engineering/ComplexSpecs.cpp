#ifndef COMPLEXSPECS_H
#define COMPLEXSPECS_H

#include <bits/stdc++.h> 
using namespace std;

class ComplexSpecs
{
    private:
        vector<float> dimensions;
        string departmentName;
    public:
        ComplexSpecs();
        void setDepartmentName(string department);
        void setSpecDimensions(vector<float> specDimensions);
        string getDepartmentName();
        vector<float> getSpecDimensions();
};

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

#endif