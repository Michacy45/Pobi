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
    int getBaseRentPrice();
    string vehicleInfo();
};