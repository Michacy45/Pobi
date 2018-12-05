#include "RentsManager.h"
using namespace std;

void RentsManager::rentVehicle(shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Vehicle>>::iterator it;
    bool check=0;

    for(it = vehicles.begin(); it != vehicles.end(); it++)
    {
        if((*it) == vehicle)
        {
            check=1;
        }

        if(!check)
        {
            vehicles.push_back(vehicle);
            break;
        }
    }
    throw logic_error ("Pojazd niedostępny");
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

void RentsManager::getAllClientRents() {

}