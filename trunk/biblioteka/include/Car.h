#include "MotorVehicle.h"

#ifndef TRUNK_CAR_H
#define TRUNK_CAR_H
class Car:public MotorVehicle{
private:
    char segment;
public:
    Car(int,string,int,char);
    int actualRentPrice();
};

#endif //TRUNK_CAR_H
