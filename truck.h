/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include <fstream>
#include "vehicle.h"

using namespace std;

class Truck: public vehicle {

  private:
    int axles;
    double weight;
    string paymentType;
  public:
    Truck( );
    Truck(string id, int year, string make, string model, string color,
      int axles, double grossWt, string paymentType);
    Truck(ifstream &inFile);
    int getAxles( );
    void setAxles(int ax);
    double getWeight( );
    void setWeight(double wt);
    string getPaymentType( );
    void setPaymentType(string pt);
    void printInfo(ofstream &out);
};

#endif
