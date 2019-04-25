/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#include <string>
#include <fstream>
#include "vehicle.h"

using namespace std;

//default constructor
vehicle::vehicle(): id("no id"), year(0), make("no make"), model("no model"),
  color("no color") {}

//parameterized constructor
vehicle::vehicle(string id, int year, string make, string model, string color):
  id(id), year(year), make(make), model(model),
  color(color){}

//another constructor using input file
vehicle::vehicle (ifstream &infile){
  infile >> id >> year >> make >> model >> color;
}

//getter for vehicle id
string vehicle::getID(){
  return id;
}

//setter for vehicle id
void vehicle::setID(string ID){
  id = ID;
}

//takes in: output text file pointer
//returns: nothing
//purpose: outputs general vehicle information to text file
void vehicle::printInfo(ofstream &out){
  out << "id: \t" << id << endl;
  out << "year: \t" << year << endl;
  out << "make: \t" << make << endl;
  out << "model: \t" << model << endl;
  out << "color: \t" << color << endl;
}
