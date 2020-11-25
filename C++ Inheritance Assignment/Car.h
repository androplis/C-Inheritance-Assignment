// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include <string>
#include "Vehicle.h"
using namespace std;

#ifndef Car_h
#define Car_h

class Car : public Vehicle {
private:
    int numDoors;
public:
    Car();
    Car(int, string, int);
    void setNumDoors(int);
    int getNumDoors();
    void displayInfo();
};

#endif /* Car_h */
