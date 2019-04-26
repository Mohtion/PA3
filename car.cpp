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
Car::Car(): vehicle(), doors(0) {}

//Returns: nothing
//Takes in: the id, year, make, model, color, and number of door of the car
//Purpose: Default constructor – use initialization list
Car::Car(string id, int year, string make, string model,
  string color, int numberOfDoors, string paymentType):
  vehicle(id, year, make, model, color), doors(numberOfDoors),
  paymentType(paymentType){}

//Returns: nothing
//Takes in: the input file pointer
//Purpose: constructor reads in the information from the file specific to car
Car::Car(ifstream &infile): vehicle(infile) {
  infile >> doors;
}

//Returns: Number of doors
//Takes in: nothing
//Purpose: returns number of doors
int Car::getDoors(){
  return doors;
}

//Returns: nothing
//Takes in: the number of doors
//Purpose: sets the number of doors
void Car::setDoors(int numDoors){
  doors = numDoors;
}

//Returns: The car name
//Takes in: nothing
//Purpose: returns car id
string Car::getPaymentType(){
  return paymentType;
}

//Returns: nothing
//Takes in: ID string
//Purpose: sets car id
void Car::setPaymentType(string pt){
  paymentType = pt;
}

//Returns: nothing
//Takes in: nothing
//Purpose: prints the car information
void Car::printInfo(ofstream &out){
  vehicle::printInfo(out);
  out << "doors:\t" << doors << endl << endl;
}
