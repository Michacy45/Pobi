#ifndef TRUNK_RENTSMANAGER_H
#define TRUNK_RENTSMANAGER_H

#include "CurrentRentsRepository.h"
#include "VehicleRepository.h"
#include "ClientRepository.h"
#include <list>
#include <iterator>

class RentsManager {
private:
    list<shared_ptr<Client>> clients;
    list<shared_ptr<Vehicle>> vehicles;
public:
    void rentVehicle();
    void returnVehicle();
    void getAllClientRents();
};
#endif
