#include "Moderate.h"


Moderate::Moderate(string StrategyName) {
	// TODO - implement Moderate::Moderate

	Tyre ** Compunds = new Tyre*[5]; 
	Compunds[0] = new Tyre("Soft"); 
	Compunds[1] = new Tyre("Soft"); 
	Compunds[2] = new Tyre("Medium"); 
	Compunds[3] = new Tyre("Medium"); 
	Compunds[4] = new Tyre("Medium");
	//this->PredictedWeather = PredictedWeather; 
	this->Name =StrategyName; 
	numberOfPitstops = 2; 

}

void Moderate::strategyBlueprint() {
	// TODO - implement Moderate::strategyBlueprint
	cout<<endl<<"------------------------------------------------------------"<<endl; 

	cout<< "The driver will be using Moderate Race Strategy!"<<endl; 
	cout<<Name<<" Moderate Strategy Blueprint:"<<endl; 

	cout<< "This Implies that "<<numberOfPitstops<<" pitstop strategy will be taken"<<endl;
	cout<< "Start with Medium tires"<<endl;
	cout<< "Pitstop 1(1/2 of race): Tyres replaced with medium set"<<endl;
	cout<< "Pitstop 2(3/4 of race): Tyres replaced with soft set"<<endl;

	cout<< "Strategy will give a steady start and will finish off strong with soft tyres"<<endl;
	cout<<"Best strategy if there is high probalility of safe car for few laps"<<endl; 

	cout<< "Medium tires will give slower lap time if theres no safe car"; 
	cout<<"------------------------------------------------------------"<<endl<<endl; 

}
