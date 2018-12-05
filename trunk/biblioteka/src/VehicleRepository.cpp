#include "VehicleRepository.h"
using namespace std;

void VehicleRepository::addVehicles(shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Vehicle>>::iterator it;
    bool check=0;
    for (it = vehicles.begin(); it != vehicles.end(); it++)
    {
        if((*it) == vehicle)
        {
            check=1;
            break;
        }
    }
    if(!check) vehicles.push_back(vehicle);
}

void VehicleRepository::rentedVehicles(shared_ptr<Vehicle>) {

}

bool VehicleRepository::searchForVehicle(shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Vehicle>>::iterator it;
    for(it = vehicles.begin(); it != vehicles.end() /*PĘĘĘĘĘĘŚŚŚKOOOOO, a co z ostatnim elementem*/; it++)
    {
        if((*it) == vehicle)
        {
            return true;
        }
    }
    return false;
}