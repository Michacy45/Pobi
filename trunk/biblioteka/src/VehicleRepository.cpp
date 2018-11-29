#include "VehicleRepository.h"
using namespace std;

string VehicleRepository::availableVehicles(shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Vehicle>>::iterator it;
    for(it == vehicles.begin(); it != vehicles.end(); it++)
    {
        if((*it) == vehicle)
        {
            return vehicle->vehicleInfo();      //??????????????
        }
    }
    return "Nie ma takiego pojazdu w bazie danych";
}

void VehicleRepository::rentedVehicles(shared_ptr<Vehicle>) {

}