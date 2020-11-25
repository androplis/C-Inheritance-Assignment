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
    // insert code here...
    Truck truck(200000, "Ford", 2001);
    truck.displayInfo();
    
    cout << endl << endl;
    return 0;
}
