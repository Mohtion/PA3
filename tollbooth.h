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
    vector <Vehicle *> inventory;
    vector <Vehicle *>::iterator iter;
  public:
    tollBooth (string id);
    string getID();
    double getTotalToll();
    void arrive(Car *c, ofstream &out);
    void arrive(Truck *t, ofsstream &out);
    void printInfo(ofstream &out);
};

#endif
