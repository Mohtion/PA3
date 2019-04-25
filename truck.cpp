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

#include "truck.h"
#include "vehicle.h"

using namespace std;

//Returns: nothing
//Takes in: nothing
//Purpose: Default constructor – use initialization list
Truck::Truck(): vehicle(), axles(0), weight(0), paymentType("no payment"){}

//Returns: nothing
//Takes in: the id, year, make, model, color, number of axles, and gross weight
//Purpose: Default constructor – use initialization list
Truck::Truck(string id, int year, string make, string model,
  string color, int axles, double grossWt, string paymentType):
  vehicle(id, year, make, model, color), axles(axles), weight(grossWt),
  paymentType(paymentType) {}

//Returns: nothing
//Takes in: the input file pointer
//Purpose: constructor reads in the information from the file specific to truck
Truck::Truck(ifstream &infile): vehicle(infile) {
  infile >> axles >> weight >> paymentType;
}

//Returns: Number of axles
//Takes in: nothing
//Purpose: returns number of axles
int Truck::getAxles(){
  return axles;
}

//Returns: nothing
//Takes in: the number of axles
//Purpose: sets the number of axles
void Truck::setAxles(int ax){
  axles = ax;
}

//Returns: weight of the truck
//Takes in: nothing
//Purpose: returns weight of the truck
double Truck::getWeight(){
  return weight;
}

//Returns: nothing
//Takes in: the weight of the truck
//Purpose: sets the weght of the truck
void Truck::setWeight(double wt){
  weight = wt;
}

//Returns: payment type
//Takes in: nothing
//Purpose: returns payment type
string Truck::getPaymentType( ){
  return paymentType;
}

//Returns: nothing
//Takes in: the payment type used
//Purpose: sets the payment type
void Truck::setPaymentType(string pt){
  paymentType = pt;
}

//Returns: nothing
//Takes in: nothing
//Purpose: prints the car information
void Truck::printInfo(ofstream &out){
  vehicle::printInfo(out);
  out << "axles:\t" << axles << endl;
  out << "weight:\t" << weight << endl;
}
