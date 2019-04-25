#Mohan Foh
#mfoh
#PA3
#Lab Section: 003
#Proffesor Hochrine

compile:
	g++ -Wall -g -std=c++11 driver.cpp dealership.cpp car.cpp truck.cpp -o driver

run:
	./driver dealer.txt

clean:
	rm *.out driver
