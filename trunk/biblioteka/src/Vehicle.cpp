#include "Vehicle.h"

Vehicle::Vehicle(string id, int baseRentPrice) {
    this->id=id;
    this->baseRentPrice=baseRentPrice;
}
string Vehicle::getId() {
    return id;
}
int Vehicle::getBaseRentPrice(){
    return baseRentPrice;
}