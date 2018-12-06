#ifndef TRUNK_RENTSMANAGER_H
#define TRUNK_RENTSMANAGER_H

#include "CurrentRentsRepository.h"
#include "VehicleRepository.h"
#include "ClientRepository.h"
#include <list>
#include <iterator>
#include "Client.h"

class RentsManager {
private:
    //list<shared_ptr<Client>> clients;
    //list<shared_ptr<Vehicle>> vehicles;
    //vector<shared_ptr<Rent>> rents;

    shared_ptr <Client> client;
    shared_ptr <VehicleRepository> vehicles;
    shared_ptr <CurrentRentsRepository> archive;
public:
    void rentVehicle(shared_ptr<Client>, shared_ptr<Vehicle>);
    void returnVehicle(shared_ptr<Client> client, shared_ptr<Vehicle>);
    list<shared_ptr<Rent>> getAllClientRents(shared_ptr<Client>);
    int checkClientRentBallance(shared_ptr<Client>);
};
#endif
