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
    current.createRent(a);
}

void RentsManager::returnVehicle(shared_ptr<Client> client, shared_ptr<Vehicle> vehicle) {
    client->removeRent(current.getRentForVehicle(vehicle));
    fromRentsToArchive(current.getRentForVehicle(vehicle));

}

list<shared_ptr<Rent>> RentsManager::getAllClientRents(shared_ptr<Client> client) {
    return archiveList.rentsList(client);
}

double RentsManager::checkClientRentBallance(shared_ptr<Client> client) {
    list<shared_ptr<Rent>>::iterator it;
    list<shared_ptr<Rent>> result (getAllClientRents(client));
    double pom = 0;
    for(it = result.begin(); it != result.end(); it++)
    {
        pom += (*it)->getPrice();
    }
    return pom;
}

void RentsManager::fromRentsToArchive(shared_ptr<Rent> rent) {
    shared_ptr<Rent> nazwa (current.removeRent(rent));
    archiveList.createRent(nazwa);
}
