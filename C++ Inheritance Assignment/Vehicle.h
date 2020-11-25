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
        void setManufacturer(string);
        void setYearBuilt(int);
        string getManufacturer();
        int getYearBuilt();
};

#endif /* Vehicle_h */
