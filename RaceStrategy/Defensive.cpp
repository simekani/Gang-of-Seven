#include "Defensive.h"

Defensive::Defensive(string StrategyName) {
	// TODO - implement Defensive::Defensive

	Tyre ** comp = new Tyre*[5]; 
	comp[0] = new Tyre("Hard"); 
	comp[1] = new Tyre("Hard"); 
	comp[2] = new Tyre("Medium"); 
	comp[3] = new Tyre("Medium"); 
	comp[4] = new Tyre("Medium"); 
	//this->PredictedWeather = PredictedWeather; 
	this->Name =StrategyName; 
	numberOfPitstops = 1; 	
}

void Defensive::strategyBlueprint() {
	// TODO - implement Defensive::strategyBlueprint
	cout<<endl<< "The driver will be using Defensive Race Strategy!"<<endl; 
	cout<<Name<<" Defensive Strategy Blueprint"<<endl; 

	cout<< "This Implies that the "<<numberOfPitstops<<" pitstop strategy will be taken"<<endl;
	cout<< "Start with Medium tires"<<endl;
	cout<< "Pitstop 1(1/2 of race): Tyres replaced with Hard set"<<endl<<endl;

	cout<<"Advantages"<<endl;
	cout<< "Strategy will ensure consistency is executed regardless of the conditions"<<endl;
	
	cout<<"Disvantages"<<endl;
	cout<< "Strategy is slow if there is a safe car"<<endl; 	
}


