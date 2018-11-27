#include "Car.h"

Car::Car(int baseRentPrice, string id, int actualRentPrice, char segment)  MotorVehicle(baseRentPrice, id, actualRentPrice)
{
    this->segment=segment;
}

int Car::actualRentPrice() {
    double mod;
    switch(segment){
        case 'A': mod=1; break;
        case 'B': mod=1.1; break;
        case 'C': mod=1.2; break;
        case 'D': mod=1.3; break;
        case 'E': mod=1.5; break;
    }
    return MotorVehicle::actualRentPrice()*mod;

}