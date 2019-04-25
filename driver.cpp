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

#include "dealership.h"
#include "car.h"
#include "truck.h"

using namespace std;

int main(int argc, char *argv[]) {
  // instantiate a dealership object
  Dealership dealer;

  // declare a file pointr for reading input file
  ifstream inputFile;// (argv[1]);

  // open the intput file that was entered at the command-line argument
  inputFile.open(argv[1]);
  //check if file is valid
  if (!inputFile.is_open()){
    cout << "The input file is not valid. Please try again." << endl;
    return 0;
  }

  //read in the type of vehicle into a string variable
  string vehicleType;
  inputFile >> vehicleType;

  // loop while not at end of file to compare the type read in to either
  // car or truck, then follow the rest of the steps outline in the
  // assignment write-up to read in all the vehicle data from the file
  while (!inputFile.eof()) {
    //if vehicleType is a car, then set car values
    if (vehicleType == "car"){
      //allocate memory for new car, then add car using addCar function
      Car newCar (inputFile);
      Car *ptrCar = new Car;
      *ptrCar = newCar;
      dealer.addCar(ptrCar);
    }
    //if vehicleType is a truck, then set truck values
    else if (vehicleType == "truck"){
      //allocate memory for new truck, then add truck using addTruck function
      Truck newTruck (inputFile);
      Truck *ptrTruck = new Truck;
      *ptrTruck = newTruck;
      dealer.addTruck(ptrTruck);
    }
    // read in next type from file
    inputFile >> vehicleType;
  }

	// print out inventory count
  cout << "inventory count = " << dealer.inventoryCount() << endl << endl;

	// print out the vehicles in the inventory
  dealer.printInventory();

  //close inputFile
  inputFile.close();

  return 0;
}
