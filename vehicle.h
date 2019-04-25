/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class vehicle{
  private:
    string id;
    int year;
    string make;
    string model;
    string color;
  public:
    vehicle( );
    vehicle(string id, int year, string make, string model, string color);
    vehicle(ifstream &infile);
    string getID();
    void setID(string ID);
    virtual void printInfo(ofstream &out);
};

#endif
