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
#include "Engineering/Car.h"

#include <stdlib.h>


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

            int budget; 
            cout<<endl<< "Enter budget for a car"<<endl; 
            cin>>budget; 

            string carName; 
            cout<<endl<< "Enter the Name your team's car"<<endl; 
            cin>>carName; 

            Car* car1 = new Car(carName,budget,false); //race strategy implemented in constructor
            budget+=500;
            Car* car2 = new Car("Second Car",budget+100,true);
            Car* car3 = new Car("Second Car",budget+100,true);
            Car* car4 = new Car("Second Car",budget+200,true);
            Car* car5 = new Car("Second Car",budget+300,true);
            Car* car6 = new Car("Second Car",budget+400,true);
            Car* car7 = new Car("Second Car",budget-100,true);
            Car* car8 = new Car("Second Car",budget-200,true);
            Car* car9 = new Car("Second Car",budget-300,true);
            Car* car10 = new Car("Second Car",budget-400,true);


            
            season = true; 
        }

    }

    return 0;
}