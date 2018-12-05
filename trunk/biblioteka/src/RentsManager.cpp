#include "RentsManager.h"
using namespace std;

void RentsManager::rentVehicle(shared_ptr<Client> client, shared_ptr<Vehicle> vehicle) {
    bool check=0;

    if(client->vehicleAmount() < client->countRents())
    {
        throw logic_error ("Osiągnąłeś maksymalną liczbę wypożyczeń");
    }

    if(!vehicles->searchForVehicle(vehicle))
    {
        throw logic_error ("Brak danego pojazdu");
    }

    shared_ptr <Rent> a(new Rent(client, vehicle, 20));
    archive->createRent(a);
}

void RentsManager::returnVehicle(shared_ptr<Client> client, shared_ptr<Vehicle> vehicle) {
    client->removeRent();
}

void RentsManager::getAllClientRents() {

}