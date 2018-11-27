#ifndef TRUNK_BICYCLE_H
#define TRUNK_BICYCLE_H

#include "Vehicle.h"

class Bicycle:public Vehicle {

public:
    Bicycle(int, string, int);
    double actualRentPrice();
};

#endif
