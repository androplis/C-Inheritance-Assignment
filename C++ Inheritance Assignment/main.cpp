// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
    string manufacturer;
    int yearBuilt, numDoors, towingCapacity;
    
    // Collect user input
    cout << endl << "Vehicle Program" << endl;
    cout << endl << "Vehicle";
    cout << endl << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << endl << "Enter the year built: ";
    cin >> yearBuilt;
    // Store in vehicle class
    Vehicle vehicle;
    vehicle.setManufacturer(manufacturer);
    vehicle.setYearBuilt(yearBuilt);
    // Display Info
    cout << endl << "Vehical Information: ";
    vehicle.displayInfo();
    
    // Collect user input
    cout << endl << endl <<  "Car: ";
    cout << endl << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << endl << "Enter the year built: ";
    cin >> yearBuilt;
    cout << endl << "Enter the number of doors: ";
    cin >> numDoors;
    // Store in vehicle class
    Car car;
    car.setManufacturer(manufacturer);
    car.setYearBuilt(yearBuilt);
    car.setNumDoors(numDoors);
    // Display Info
    cout << endl << "Car Information: ";
    car.displayInfo();
    
    // Collect user input
    cout << endl << endl << "Truck: ";
    cout << endl << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << endl << "Enter the year built: ";
    cin >> yearBuilt;
    cout << endl << "Enter the towing capacity: ";
    cin >> towingCapacity;
    // Store in vehicle class
    Truck truck;
    truck.setManufacturer(manufacturer);
    truck.setYearBuilt(yearBuilt);
    truck.setTowingCapacity(towingCapacity);
    // Display Info
    cout << endl << "Truck Information: ";
    truck.displayInfo();
    
    cout << endl << endl;
    return 0;
}
