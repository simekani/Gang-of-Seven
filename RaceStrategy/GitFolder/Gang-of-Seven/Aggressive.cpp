#include "Aggressive.h"

Aggressive::Aggressive(string StrategyName) {
	// TODO - implement Aggressive::Aggressive

	Tyre ** comp = new Tyre*[5]; 
	comp[0] = new Tyre("Soft"); 
	comp[1] = new Tyre("Soft"); 
	comp[2] = new Tyre("Soft"); 
	comp[3] = new Tyre("Medium"); 
	comp[4] = new Tyre("Medium"); 
	this->Name =StrategyName; 
}

void Aggressive::strategyBlueprint() {
	// TODO - implement Aggressive::strategyBlueprint
	cout<< "The driver will be using Aggressive Race Strategy!"<<endl; 
	cout<<Name<<" Aggressive Strategy Blueprint"<<endl; 

	cout<< "This Implies that the "<<numberOfPitstops<<" pitstop strategy will be taken"<<endl;
	cout<< "Start with soft tires"<<endl;
	cout<< "Pitstop 1(1/3 of race): Tyres replaced with soft tires"<<endl;
	cout<< "Pitstop 2(2/3 of race): Tyres replaced with Medium tires"<<endl<<endl;


	cout<< "The Aggressive Strategy is highly succesfull when there is a safe car"<<endl; 
	cout<< "The Aggressive Strategy could fail if pitstops take too long"<<endl; 
}
