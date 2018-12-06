#include "RentsRepository.h"
using namespace std;

void RentsRepository::createRent(shared_ptr<Rent> rent) {
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

shared_ptr<Rent> RentsRepository::removeRent(shared_ptr<Rent> rent) {
    list<shared_ptr<Rent>>::iterator it;
    for (it = rents.begin(); it != rents.end(); it++) {
        if ((*it) == rent) {
            it = rents.erase(it);
            return *it;                         //???????????????????????????????????????????
        }
    }
    throw logic_error ("Nie można usunąć wypożyczenia");
}
string RentsRepository::getClientForRentedVehicle(shared_ptr<Vehicle> vehicle){
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

shared_ptr<Rent> RentsRepository::getRentForVehicle(shared_ptr<Vehicle> vehicle) {
    list<shared_ptr<Rent>>::iterator it;
    for(it = rents.begin(); it!=rents.end(); it++)
    {
        if((*it)->getVehicle()==vehicle) return *it;
    }

}

list<shared_ptr<Rent>> RentsRepository::rentsList(shared_ptr<Client> client) {
    list<shared_ptr<Rent>>::iterator it;
    list<shared_ptr<Rent>> result;

    for (it = rents.begin(); it != rents.end(); it++)
    {
        if((*it)->getClient() == client)
        {
            result.push_back(*it);
        }
    }
    return result;
}

string RentsRepository::rentReport() {
    list<shared_ptr<Rent>>::iterator it;
    ostringstream info;

    for(it=rents.begin(); it!=rents.end(); it++)
    {
        info << (*it)->rentInfo() << '\n';
    }
    return info.str();
}