#include "Vehicle.h"

Vehicle::Vehicle(string id, int baseRentPrice) {
    this->id=id;
    this->baseRentPrice=baseRentPrice;
}

string Vehicle::getId() {
    return id;
}

int Vehicle::actualRentPrice(){
    return baseRentPrice;
}

string Vehicle::vehicleInfo(){
    ostringstream info;
    info << "Numer rejestracyjny pojazdu: " << id << ", oraz jego cena bazowa: " << baseRentPrice;
    return info.str();
}