#include "MotorVehicle.h"

MotorVehicle::MotorVehicle(int baseRentPrice, string id, int engineDisplacement):Vehicle(id,baseRentPrice){

    this->engineDisplacement=engineDisplacement;

}

double MotorVehicle::actualRentPrice() {
    double mod;
    if(engineDisplacement<=1000) mod=1;
    else if(engineDisplacement>1000 && engineDisplacement<=2000) mod=0.0005*engineDisplacement+0.5;
    else mod=1.5;
    return mod*Vehicle::actualRentPrice();
}