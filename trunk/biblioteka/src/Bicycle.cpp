#include "Bicycle.h"
using namespace std;

Bicycle::Bicycle (int baseRentPrice, string id, int actualRentPrice) : Vehicle(id, baseRentPrice) {}

double Bicycle::actualRentPrice(){
    return baseRentPrice;
}