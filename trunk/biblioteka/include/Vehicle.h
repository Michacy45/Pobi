#ifndef TRUNK_VEHICLE_H
#define TRUNK_VEHICLE_H

#include <iostream>
#include <sstream>
using namespace std;
class Vehicle{
protected:
    string id;
    int baseRentPrice;
public:
    Vehicle(string, int);
    string getId();
    int getBaseRentPrice();
    string vehicleInfo();
};

#endif