/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "car.h"
#include "vehicle.h"

using namespace std;

//Returns: nothing
//Takes in: nothing
//Purpose: Default constructor – use initialization list
Car::Car(): id("noid"), year(0), make("nomake"), model("nomodel"),
  color("nocolor"), doors(0) {}

//Returns: nothing
//Takes in: the id, year, make, model, color, and number of door of the car
//Purpose: Default constructor – use initialization list
Car::Car(string id, int year, string make, string model,
  string color, int numberOfDoors)
  : id(id), year(year), make(make), model(model), color(color),
    doors(numberOfDoors){}

//Returns: nothing
//Takes in: the input file pointer
//Purpose: constructor reads in the information from the file specific to car
Car::Car(ifstream &infile){
  infile >> doors;
}

//Returns: Number of doors
//Takes in: nothing
//Purpose: returns number of doors
int Car::getDoors(){
  return doors;
}

//Returns: The car name
//Takes in: nothing
//Purpose: returns car id
string Car::getID(){
  return id;
}

//Returns: nothing
//Takes in: the number of doors
//Purpose: sets the number of doors
void Car::setDoors(int numDoors){
  doors = numDoors;
}

//Returns: nothing
//Takes in: ID string
//Purpose: sets car id
void Car::setID(string ID){
  id = ID;
}

//Returns: nothing
//Takes in: nothing
//Purpose: prints the car information
void Car::printInfo(){
  cout << "id:\t" << id << endl;
  cout << "year:\t" << year << endl;
  cout << "make:\t" << make << endl;
  cout << "model:\t" << model << endl;
  cout << "color:\t" << color << endl;
  cout << "doors:\t" << doors << endl << endl;
}
