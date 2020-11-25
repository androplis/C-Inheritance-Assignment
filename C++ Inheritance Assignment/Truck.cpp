// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include <iostream>
#include "Truck.h"

// === Constructors ===
Truck::Truck(int newTowingCapacity, string newMan, int newYearBuilt) : Vehicle(newMan, newYearBuilt) {
    towingCapacity = newTowingCapacity;
}

// === Mutator Methods ===
void Truck::setTowingCapacity(int newTowingCapacity) {
    towingCapacity = newTowingCapacity;
}

// === Accessor Methods ===
int Truck::getTowingCapacity() {
    return towingCapacity;
}

// === Display Info Method ===
void Truck::displayInfo() {
    Vehicle::displayInfo();
    cout << endl << "Towing Capacity: " << towingCapacity;
}
