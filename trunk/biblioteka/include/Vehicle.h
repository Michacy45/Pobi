#ifndef TRUNK_VEHICLE_H
#define TRUNK_VEHICLE_H

#include <iostream>
#include <sstream>
using namespace std;
class Vehicle{
private:
    string id;
    int baseRentPrice;
public:
    Vehicle(string, int);
    string getId();
    int actualRentPrice();
    string vehicleInfo();
};

#endif