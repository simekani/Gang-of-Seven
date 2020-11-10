#ifndef COMPLEXSPECS_H
#define COMPLEXSPECS_H

#include <vector> 
#include <iostream>
#include <string>

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

#endif