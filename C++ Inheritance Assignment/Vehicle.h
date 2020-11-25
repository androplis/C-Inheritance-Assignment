// Andrew Biddle
// CIS 1202.501
// 11.24.20

#include <iostream>
#include <string>
using namespace std;

#ifndef Vehicle_h
#define Vehicle_h

class Vehicle {
    private:
        string manufacturer;
        int yearBuilt;
    
    public:
        Vehicle();
        Vehicle(string, int);
        void setManufacturer(string);
        void setYearBuilt(int);
        string getManufacturer();
        int getYearBuilt();
        void displayInfo();
};

#endif /* Vehicle_h */
