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