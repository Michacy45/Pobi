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
    client->removeRent(archive->getRentForVehicle(vehicle));
    archive->fromRentsToArchive(archive->getRentForVehicle(vehicle));

}
//ZRÓB ZEBY dla tego klienta w pętli pododawało wszystkie jego Renty z archieRents a w che
list<shared_ptr<Rent>> RentsManager::getAllClientRents(shared_ptr<Client>) {
    list<shared_ptr<Rent>> clientrents;//
    //...........................
    return clientrents;
}

int RentsManager::checkClientRentBallance(shared_ptr<Client> client) {
    //A TU TYLKO ZRÓB LISTE DO KTÓREJ ZROBISZ "=getAllClientRents' i zliczysz i zwrócisz ilość elementów w niej,
    //generalnie dla mnie bez sensu rozdzielac to na 2 metody no ale cóż xddd
}