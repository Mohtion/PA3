/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "dealership.h"
#include "truck.h"
#include "car.h"

using namespace std;

//Returns: nothing
//Takes in: nothing
//Purpose: Default constructor – use initialization list
Dealership::Dealership(): id("noid"){

}

//Returns: nothing
//Takes in: the name of the dealership
//Purpose: Regular constructor – use initialization list;
Dealership::Dealership(string id): id(id){

}

//Returns: nothing
//Takes in: nothing
//Purpose: There is nothing to be deconstructed
Dealership::~Dealership(){

}


//Returns: the dealership name
//Takes in: nothing
//Purpose: return the dealership name
string Dealership::getID(){
  return id;
}

//Returns: nothing
//Takes in: the name of the dealership
//Purpose: sets the dealership name
void Dealership::setID(string ID){
  id = ID;
}

//Returns: nothing
//Takes in:
//Purpose: iterates through the vectors of vehicles and calls
void Dealership::printInventory(){
  unsigned int numVehicles = inventoryCount();
  //sets the truck and car iterators to the start of their respective vectors
  truckIter = truckInventory.begin();
  carIter = carInventory.begin();

  //loop through whole array
  for (unsigned int i = 0; i < numVehicles; i++){
    //print out truck inventory if not end of truck vector
    if (i < truckInventory.size()){
      (**truckIter).printInfo();
      if (i < truckInventory.size() - 1)
        advance(truckIter, 1);
    }
    //print out car inventory if not end of car vector
    else {
      (**carIter).printInfo();
      if (i < carInventory.size() + truckInventory.size() - 1)
        advance(carIter, 1);
    }
  }

}

//Returns: the number of vehicles in both vectors
//Takes in: nothing
//Purpose: returns the number of vehicles in both vectors
int Dealership::inventoryCount(){
  return carInventory.size() + truckInventory.size();
}

//Returns: nothing
//Takes in: truck class pointer
//Purpose: adds a truck to the truck inventory
void Dealership::addTruck(Truck *t){
  //adds to the end of vector and sets it equal to truck pointer t
  truckInventory.push_back(t);
  //carIter = truckInventory.end();
  //(**carIter).
}

//Returns: nothing
//Takes in: car class pointer
//Purpose: adds a car to the car inventory
void Dealership::addCar(Car *c){
  //adds to the end of vector and sets it equal to truck pointer t
  carInventory.push_back(c);

}
