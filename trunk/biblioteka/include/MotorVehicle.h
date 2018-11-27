#include "Vehicle.h"
using namespace std;

#ifndef TRUNK_MOTORVEHICLE_H
#define TRUNK_MOTORVEHICLE_H
class MotorVehicle:public Vehicle{

protected:
    int engineDisplacement;
public:
    MotorVehicle(int,string,int);
    double actualRentPrice();

};





#endif //TRUNK_MOTORVEHICLE_H

