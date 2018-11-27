#ifndef TRUNK_MOTORVEHICLE_H
#define TRUNK_MOTORVEHICLE_H

#include "Vehicle.h"
using namespace std;

class MotorVehicle:public Vehicle{

protected:
    int engineDisplacement;
public:
    MotorVehicle(int,string,int);
    double actualRentPrice();

};

#endif

