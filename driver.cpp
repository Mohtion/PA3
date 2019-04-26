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

#include "tollbooth.h"
#include "vehicle.h"
#include "car.h"
#include "truck.h"

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 3){
    cout << "Incorrect number of arguments. " << endl
      << "Note: You need 3. (./a.out input.txt output.txt )" << endl;
    return 0;
  }

  // instantiate a tollbooth object
  tollbooth tb("TOLL BOOTH SIMULATION");

  // declare a file pointer for reading input file and writing output file
  ifstream inputFile;// (argv[1]);
  ofstream outputFile;

  // open the intput file that was entered at the command-line argument
  inputFile.open(argv[1]);
  outputFile.open(argv[2]);
  //check if file is valid
  if(!inputFile.is_open() || !outputFile.is_open()){
    if (!inputFile.is_open()){
      cout << "The input file is not valid. Please try again." << endl;
    }
    if (!inputFile.is_open()){
      cout << "The output file is not valid. Please try again." << endl;
    }
  }

  outputFile << tb.getID() << ":" << endl;

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
      //vehicle *newV = new Car;
      Car *newCar = new Car(inputFile);
      //newCar = static_cast<Car *>(newV);
      tb.arrive(newCar, outputFile);
    }
    //if vehicleType is a truck, then set truck values
    else if (vehicleType == "truck"){
      //allocate memory for new truck
      Truck *newTruck = new Truck(inputFile);
      tb.arrive(newTruck, outputFile);
    }
    // read in next type from file
    inputFile >> vehicleType;
  }

	// print output for toll booth
  tb.printInfo(outputFile);

  //close inputFile
  inputFile.close();
  outputFile.close();

  return 0;
}
