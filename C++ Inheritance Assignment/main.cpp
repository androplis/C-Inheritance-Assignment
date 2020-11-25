// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

int main() {
    // insert code here...
    Vehicle car;
    car.setManufacturer("Ford");
    car.setYearBuilt(2001);
    car.displayInfo();
    
    cout << endl << endl;
    return 0;
}
