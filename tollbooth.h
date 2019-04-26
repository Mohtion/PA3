/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H

#include <string>
#include <vector>
#include "vehicle.h"
#include "truck.h"
#include "car.h"

using namespace std;

class tollbooth{
  private:
    string id;
    int carCount;
    int truckCount;
    double totalToll;
    int cashCount;
    int cardCount;
    vector <vehicle *> inventory;
    vector <vehicle *>::iterator iter;
  public:
    tollbooth (string id);
    string getID();
    double getTotalToll();
    void arrive(Car *c, ofstream &out);
    void arrive(Truck *t, ofstream &out);
    void printInfo(ofstream &out);
};

#endif
