#include "CurrentRentsRepository.h"
using namespace std;

void CurrentRentsRepository::createRent(shared_ptr<Rent> rent) {
    list<shared_ptr<Rent>>::iterator it;
    bool check=0;
    for (it = rents.begin(); it != rents.end(); it++)
    {
        if((*it) == rent /*|| (*it) == rent->getVehicle()*/)
        {
            check=1;
            throw logic_error ("Wypożyczenie już istnieje, lub ten pojazd został już wypożyczony");
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

shared_ptr<Rent> CurrentRentsRepository::getRentForVehicle(shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Rent>>::iterator it;
    for(it = rents.begin(); it!=rents.end(); it++)
    {
        if((*it)->getVehicle()==vehicle) return *it;
    }

}

void CurrentRentsRepository::fromRentsToArchive(shared_ptr<Rent> rent) {
    list<shared_ptr<Rent>>::iterator it;
    for (it = rents.begin(); it != rents.end(); it++) {
        if ((*it) == rent) {
            archiveRents.push_back(rent);
            it = rents.erase(it);
            break;
        }
    }

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