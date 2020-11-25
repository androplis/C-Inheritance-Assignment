// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include "Car.h"
#include <iostream>
using namespace std;

// === Constructors ===
Car::Car(int newNumDoors, string newMan, int newYearBuilt) : Vehicle(newMan, newYearBuilt) {
    numDoors = newNumDoors;
}

// === Mutator Methods ====
void Car::setNumDoors(int newNumDoors) {
    numDoors = newNumDoors;
}

// === Accessor Methods ===
int Car::getNumDoors() {
    return numDoors;
}

// === Display Info Method - Display the contents of the car
void Car::displayInfo() {
    Vehicle::displayInfo();
    cout << endl << "Number of Doors: " << numDoors;
}
