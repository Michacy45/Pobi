#include "RentsManager.h"
using namespace std;

void RentsManager::rentVehicle(shared_ptr<Client> client, shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Vehicle>>::iterator it;
    bool check=0;

    if(client->vehicleAmount() < client->countRents())
    {
        throw logic_error ("Osiągnąłeś maksymalną liczbę wypożyczeń");
    }

    for(int i = 0; i < vehicles->vehicles.size(); i++)      //Juz widze przerazenie w Twoich oczach XD
    {
        if(vehicle == vehicles->vehicles)           //Nie mam bladego pojecia jak sie dobrac do pojednczego elementu w tej liscie. P.S. Dostaje teraz jednej z tycvh moich glupawek co mi sie przydazaja i juz nie mysle :D
    }

    Rent(client, vehicle, 20);
}

void RentsManager::returnVehicle(shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Vehicle>>::iterator it;
    for (it = vehicles.begin(); it != vehicles.end(); it++) {
        if ((*it) == vehicle) {
            it = vehicles.erase(it);
            client->removeRent();
            break;
        }
    }
}


//Najpierw sprawdzamy klienta
//pozniej sprawdzamy pojazd
//sprawdzamy pojazd w currentRentsRepository
//dodaje do currenta

void RentsManager::getAllClientRents() {

}