/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
#include "tollbooth.h"
#include "vehicle.h"
#include "truck.h"
#include "car.h"

using namespace std;

//takes in: toll booth id
//returns: nothing
//purpose: tollBooth constructor that sets title of tollbooth output
tollbooth::tollbooth (string id): id(id), carCount(0), truckCount(0), totalToll(0),
  cashCount(0), cardCount(0){}

//takes in: nothing
//returns: tollbooth id
//purpose: returns the toll booth id
string tollbooth::getID(){
  return id;
}

//takes in: nothing
//returns: the total toll
//purpose: returns the total toll
double tollbooth::getTotalToll(){
  return totalToll;
}

//takes in: car pointer, output text file pointer
//returns: nothing
//purpose: creates a timestamp for the car with a local time_t variable and then
//  sending it to time() function; calculate the toll for that vehicle; add it
//  to the totalToll; increment carCount; increment cashCount or cardCount
//  depending on the paymentType for that car; and add it to the inventory.
void tollbooth::arrive(Car *c, ofstream &out){
  time_t timestamp;
  time(&timestamp);
  //output car amount and timestamp
  out << "Car " << ++carCount << "\tAmt Due: " << "$" << 3 + 1 * c->getDoors()
    << ", " << "timeArrived: " << ctime(&timestamp) << endl;
  totalToll += 3 + 1 * c->getDoors();
  //add to cash or card total
  if (c->getPaymentType() == "card" || c->getPaymentType() == "Card"){
    cardCount += 3 + 1 * c->getDoors();
  }
  if (c->getPaymentType() == "cash" || c->getPaymentType() == "Cash"){
    cardCount += 3 + 1 * c->getDoors();
  }
}

//takes in: truck pointer, output text file pointer
//returns: nothing
//purpose: creates a timestamp for the truck with a local time_t variable and then
//  sending it to time() function; calculate the toll for that vehicle; add it
//  to the totalToll; increment truckCount; increment cashCount or cardCount
//  depending on the paymentType for that truck; and add it to the inventory.
void tollbooth::arrive(Truck *t, ofstream &out){
  time_t timestamp;
  time(&timestamp);
  //output truck amount and timestamp
  out << "Truck " << ++truckCount << "\tAmt Due: " << "$" <<
    5 * t->getAxles()+ 10 * t->getWeight() << ", " << "timeArrived: " <<
    ctime(&timestamp) << endl;
  totalToll += 5 * t->getAxles()+ 10 * ceil(t->getWeight() / 1000.0);
  //add to cash or card total
  if (t->getPaymentType() == "card" || t->getPaymentType() == "Card"){
    cardCount += 5 * t->getAxles()+ 10 * ceil(t->getWeight() / 1000.0);
  }
  if (t->getPaymentType() == "cash" || t->getPaymentType() == "Cash"){
    cardCount += 5 * t->getAxles()+ 10 * ceil(t->getWeight() / 1000.0);
  }
}

//takes in:
//returns:
//purpose: print “End of Day totalTolls:” values; then the “Vehicle
// Information:” by looping through the inventory vector calling the printInfo()
// function on each vehicle. If the vehicle is a car, it
// will call the car’s printInfo() function; or if it is a truck, it will call
// the truck’s printInfo() function.
void tollbooth::printInfo(ofstream &out){

}
