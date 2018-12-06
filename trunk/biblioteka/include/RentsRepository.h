#ifndef TRUNK_RENTSREPOSITORY_H
#define TRUNK_RENTSREPOSITORY_H

#include <iostream>
#include <list>
#include "Rent.h"
#include <iterator>

class RentsRepository{
private:
    list<shared_ptr<Rent>> rents;
    //list<shared_ptr<Rent>> archiveRents;
    //shared_ptr <Vehicle> vehicle;
public:
    void createRent(shared_ptr<Rent>);
    shared_ptr<Rent> removeRent(shared_ptr<Rent>);
    string getClientForRentedVehicle(shared_ptr<Vehicle>);
    shared_ptr<Rent> getRentForVehicle(shared_ptr<Vehicle>);

    //void fromRentsToArchive(shared_ptr<Rent>);

    list<shared_ptr<Rent>> rentsList(shared_ptr<Client>);
    string rentReport();
};

#endif
