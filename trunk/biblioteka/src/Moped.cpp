#include "Moped.h"
using namespace std;

Moped::Moped(int baseRentPrice, string id, int actualRentPrice) : MotorVehicle(baseRentPrice,id,actualRentPrice){}

double Moped::actualRentPrice() {
    return MotorVehicle::actualRentPrice();
}
