// #include "Mediator/EngineeringTeam.h"
// #include "Mediator/SpecsBoardroom.h"
// #include "Mediator/TestingBoardroom.h"

// #include "Engineering/Composite_ChassisDep.h"
// #include "Engineering/Composite_ElectronicsDepartment.h"
// #include "Engineering/Composite_EngineDepartment.h"
// #include "Engineering/CompositeAerodynamicsDepartment.h"

// #include "Engineering/DesignTeam.h"
// #include "Engineering/EngineDepartment.h"
// #include "Engineering/ChassisDepartment.h"
// #include "Engineering/EngineeringDepartment.h"
// #include "Engineering/ElectronicsDepartment.h"
// #include "Engineering/AerodynamicsDepartment.h"
// #include "Engineering/RearWing.h"
// #include "Engineering/FrontWing.h"
// #include "Engineering/floorWing.h"
#include <stdlib.h>
#include "RaceStrategy/RaceStrategyDepartment.h" 

#include <iostream>

using namespace std;

int main(){

    bool season = false; 

    while (true)
    {
        if(season)
        {
            cout<<"Select the option: "<<endl
            <<"1. Create new season"<<endl
            <<"2. Continue season"<<endl
            <<"3. End season"<<endl; 
            int y; 
            cin>>y; 

            if(y==0)
            {
              exit(0); 
            }

           else if(y==1)
            {
               season = false;  
            }

            else if (y ==2)
            {
                cout<<endl<<"Select the option: "<<endl
                <<"1. Modify Race Strategy"<<endl
                <<"2. Modify Car"<<endl
                <<"3. Test/Simulate Car"<<endl
                <<"4. Determine Logistics"<<endl
                <<"5. Race"<<endl<<endl; 
                cout<<"0. quit"<<endl; 
                int val; 
                cin>>val;  

                switch(val)
                {
                    case 0: exit(0); 
                    case 1: 
                        // simekani Main
                    break; 

                    case 2: 
                        //MP & Noah main 
                    break;

                    case 3: 
                        // (Testing main)
                    break; 

                    case 4: 
                        // Logistis shandis needs to be packed (Mish main)
                    break;  

                    case 5: 
                           // Then Race stuff can happen(Sthe main )
                    break; 

                }
            }

            else{ 
                season = false; 
                  
            }
        }

        else
        { 
            // create season
            // team - Cars
            // Cars - Race strategy , eng dept, 
            cout<<"Welcome to F1!"<<endl; 
            cout<<"Create a Team"<<endl; 

            int strategyPack; 
            cout<<endl<< "Choose strategy Pack"<<endl
             <<"1. Defensive"<<endl
            <<"2. Moderate"<<endl
            <<"3. Aggressive"<<endl; 
            cout<<"0. quit"<<endl<<endl; 
            cin>>strategyPack; 

            string name; 
            cout<< "Enter strategy name"<<endl;   
            cin>> name;

            string pack = "Aggressive"; 

            switch(strategyPack)
            {
                case 0: exit(0); break; 
                case 1: pack = "Defensive" ;    break; 
                case 2: pack = "Moderate" ;     break; 
                case 3: pack = "Aggressive" ;   break; 
                default: 
                cout<< "Invalid option "<<endl; 
            }

            RaceStrategyDepartment* strategy = new RaceStrategyDepartment(); 
            strategy->composeStrategy(pack, name);
            // chose car eng team 

            season = true; 
        }

    }

    return 0;
}