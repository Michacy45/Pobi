#ifndef TRUNK_CURRENTRENTSREPOSITORY_H
#define TRUNK_CURRENTRENTSREPOSITORY_H

#include <iostream>
#include <list>
#include "Rent.h"
#include <iterator>

class CurrentRentsRepository{
private:
    list<shared_ptr<Rent>> rents;
    list<shared_ptr<Rent>> archiveRents;
    //shared_ptr <Vehicle> vehicle;
public:
    void createRent(shared_ptr<Rent>);
    void removeRent(shared_ptr<Rent>);
    string getClientForRentedVehicle(shared_ptr<Vehicle>);
    shared_ptr<Rent> getRentForVehicle(shared_ptr<Vehicle>);
    void fromRentsToArchive(shared_ptr<Rent>);
    string rentReport();
};

#endif
