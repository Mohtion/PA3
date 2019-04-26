/*******************
  Mohan Foh
  mfoh
  PA3
  Lab Section: 003
  Proffesor Hochrine
*******************/

#ifndef CAR_H
#define CAR_H

#include <string>
#include "vehicle.h"

using namespace std;

class Car: public vehicle{
  private:
    int doors;
    string paymentType;
  public:
    Car( );
    Car(string id, int year, string make, string model, string color,
      int numberOfDoors, string paymentType);
    Car(ifstream &inFile);
    int getDoors( );
    void setDoors(int numDoors);
    string getPaymentType( );
    void setPaymentType(string pt);
    void printInfo(ofstream &out);
};

#endif
