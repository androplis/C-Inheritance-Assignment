// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include <string>
#include "Vehicle.h"
using namespace std;

#ifndef Truck_h
#define Truck_h

class Truck : public Vehicle {
private:
    int towingCapacity;
public:
    Truck(int, string, int);
    void setTowingCapacity(int);
    int getTowingCapacity();
    void displayInfo();
};

#endif /* Truck_h */
