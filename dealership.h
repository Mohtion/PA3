/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include "truck.h"
#include "car.h"

using namespace std;

class Dealership {
  private:
    string id;
    vector<Truck *> truckInventory;
    vector<Car *> carInventory;
    vector<Truck *>::iterator truckIter;
    vector<Car *>::iterator carIter;

  public:
    Dealership();
    Dealership(string id);
    ~Dealership();

    string getID();
    void setID(string id);

    void printInventory();
    int inventoryCount();
    void addTruck(Truck *t);
    void addCar(Car *c);
};

#endif
