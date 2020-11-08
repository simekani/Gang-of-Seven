

#include "RaceStrategyDepartment.h" 

using namespace std; 

int main ()
{
    
        string val; 
        cout<< "Enter strategy name"<<; 
        cin>> val;

        RaceStrategyDepartment* strategy = new RaceStrategyDepartment(); 
        strategy->composeStrategy("Moderate", val); 

    
}