#ifndef TRUNK_CAR_H
#define TRUNK_CAR_H

#include "MotorVehicle.h"
class Car:public MotorVehicle{
private:
    char segment;
public:
    Car(int,string,int,char);
    double actualRentPrice();
};

#endif
