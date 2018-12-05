#ifndef TRUNK_VEHICLEREPOSITORY_H
#define TRUNK_VEHICLEREPOSITORY_H

#include "Rent.h"
#include <list>
#include <iterator>


class VehicleRepository {
private:
    list<shared_ptr<Vehicle>> vehicles;
public:
    void addVehicles(shared_ptr<Vehicle>);
    void rentedVehicles(shared_ptr<Vehicle>);
    bool searchForVehicle(shared_ptr<Vehicle>);
};

#endif