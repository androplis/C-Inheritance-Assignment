// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include "Vehicle.h"
#include <iostream>

// === Constructors ====
Vehicle::Vehicle(string newMan, int newYearBuilt) {
    manufacturer = newMan;
    yearBuilt = newYearBuilt;
}

// === Mutator Methods ===
void Vehicle::setManufacturer(string vehicleManufacturer) {
    manufacturer = vehicleManufacturer;
}

void Vehicle::setYearBuilt(int vehicleYearBuilt) {
    yearBuilt = vehicleYearBuilt;
}

// === Accessor Methods ===
string Vehicle::getManufacturer() {
    return manufacturer;
}

int Vehicle::getYearBuilt() {
    return yearBuilt;
}

// === Displays the contents of the object
void Vehicle::displayInfo() {
    cout << endl << "Manufacturer: " << manufacturer;
    cout << endl << "Year Built: " << yearBuilt;
}
