#include "CurrentRentsRepository.h"
using namespace std;

void CurrentRentsRepository::createRent(shared_ptr<Rent> rent) {
    list<shared_ptr<Rent>>::iterator it;
    bool check=0;
    for (it = rents.begin(); it != rents.end(); it++)
    {
        if((*it) == rent)
        {
            check=1;
            break;
        }

    }
    if(!check) rents.push_back(rent);
}

void CurrentRentsRepository::removeRent(shared_ptr<Rent> rent) {
    list<shared_ptr<Rent>>::iterator it;
    for (it = rents.begin(); it != rents.end(); it++) {
        if ((*it) == rent) {
            it = rents.erase(it);
            break;
        }
    }
}
string CurrentRentsRepository::getClientForRentedVehicle(shared_ptr<Vehicle> vehicle){
    list<shared_ptr<Rent>>::iterator it;
    for(it=rents.begin(); it!=rents.end(); it++)
    {
        if((*it)->getVehicle()==vehicle)
        {
            return (*it)->rentInfo();
        }
    }
    return "Brak pojazdu w repozytorium";
}

string CurrentRentsRepository::rentReport() {
    list<shared_ptr<Rent>>::iterator it;
    ostringstream info;

    for(it=rents.begin(); it!=rents.end(); it++)
    {
        info << (*it)->rentInfo() << '\n';
    }
    return info.str();
}

void CurrentRentsRepository::checkVehicle() {

}