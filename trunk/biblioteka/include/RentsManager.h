#ifndef TRUNK_RENTSMANAGER_H
#define TRUNK_RENTSMANAGER_H

#include "RentsRepository.h"
#include "VehicleRepository.h"
#include "ClientRepository.h"
#include <list>
#include <iterator>
#include "Client.h"

class RentsManager {
private:
    RentsRepository current;
    RentsRepository archiveList;
    //vector<shared_ptr<Rent>> rents;

    shared_ptr <Client> client;
    shared_ptr <VehicleRepository> vehicles;
    shared_ptr <RentsRepository> archive;
public:
    void rentVehicle(shared_ptr<Client>, shared_ptr<Vehicle>);
    void returnVehicle(shared_ptr<Client> client, shared_ptr<Vehicle>);
    list<shared_ptr<Rent>> getAllClientRents(shared_ptr<Client>);
    double checkClientRentBallance(shared_ptr<Client>);
    void fromRentsToArchive(shared_ptr<Rent>);
};
#endif
