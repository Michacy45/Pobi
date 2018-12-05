#include "Bicycle.h"
using namespace std;

Bicycle::Bicycle (int baseRentPrice, string id) : Vehicle(id, baseRentPrice) {}

double Bicycle::actualRentPrice(){
    return Vehicle::actualRentPrice();
}