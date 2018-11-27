#ifndef TRUNK_MOPED_H
#define TRUNK_MOPED_H

#include "MotorVehicle.h"

class Moped:public MotorVehicle{
public:
    Moped(int, string, int);
    double actualRentPrice();
};

#endif
