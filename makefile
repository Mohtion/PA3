#Mohan Foh
#mfoh
#PA3
#Lab Section: 003
#Proffesor Hochrine

compile:
	g++ -Wall -g -std=c++11 driver.cpp tollbooth.cpp vehicle.cpp car.cpp truck.cpp -o tollbooth

run:
	./tollbooth vehicle.txt output.txt

clean:
	rm *.out tollbooth
