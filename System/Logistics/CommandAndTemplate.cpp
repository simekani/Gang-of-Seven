#include "CommandAndTemplate.h"
#include <iostream>
#include <vector>

//Template
void Transport::print() {
	std::cout << "Transport the cargo using the " << this->getMode() << std::endl;
}

std::string Ship::getMode() {
	return "ship";
}
std::string Truck::getMode() {
	return "truck";
}
std::string Plane::getMode() {
	return "plane";
}

//Receiver
Cargo::Cargo(Parts* part){
    this->part = part;
}

//Concrete Receivers
NonPriorityPallet::NonPriorityPallet(Parts* part): Cargo(part){};

void NonPriorityPallet::pack() {
    std::cout << "Pack " << part->getName() << " into a non-priority pallet" << std::endl;
    parts.push_back(part);
}

void NonPriorityPallet::unpack() {
    std::vector<Parts*>::iterator it = parts.begin();
    while (it != parts.end()) {
      if ((*it)->getName() == part->getName()){
        std::cout << "Unpack " << part->getName() << " from the non-priority pallet" << std::endl;
        break;
      } 
      it++;
    }
    parts.erase(it);
}
PriorityPallet::PriorityPallet(Parts* part): Cargo(part){};
void PriorityPallet::pack() {
    std::cout << "Pack " << part->getName() << " into a priority pallet" << std::endl;
    parts.push_back(part);
}

void PriorityPallet::unpack() {
    std::vector<Parts*>::iterator it = parts.begin();
    while (it != parts.end()) {
      if ((*it)->getName() == part->getName()){
        std::cout << "Unpack " << part->getName() << " from the priority pallet\n" << std::endl;
        break;
      } 
      it++;
    }
    parts.erase(it);
}

//Command
PackPallet::PackPallet(Cargo* receiver) {
	this->receiver = receiver;
}

void PackPallet::setReceiver(Cargo* receiver){
	this->receiver = receiver;
}

Cargo* PackPallet::getReceiver(){
	return receiver;
}

//Concrete Commands
//pack
PackNonPriorityPallet::PackNonPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void PackNonPriorityPallet::execute(){
    getReceiver()->pack();
}

PackPriorityPallet::PackPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void PackPriorityPallet::execute(){
    getReceiver()->pack();
}
//unpack
UnpackPriorityPallet::UnpackPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void UnpackPriorityPallet::execute(){
    getReceiver()->unpack();
}

UnpackNonPriorityPallet::UnpackNonPriorityPallet(Cargo* cargo): PackPallet(cargo){}

void UnpackNonPriorityPallet::execute(){
    getReceiver()->unpack();
}

//Invoker
PreparePallet::PreparePallet(PackPallet* pack, PackPallet* unpack){
	packCommand = pack;
	unpackCommand = unpack;
}
	
void PreparePallet::executePack(){
	packCommand->execute();
}

void PreparePallet::executeUnpack(){
	unpackCommand->execute();
}