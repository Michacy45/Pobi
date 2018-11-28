#ifndef TRUNK_CURRENTRENTSREPOSITORY_H
#define TRUNK_CURRENTRENTSREPOSITORY_H

#include <iostream>
#include <list>

#include "Rent.h"
class CurrentRentsRepository{
private:
    list<shared_ptr<Rent>> rents;
public:
    void createRent(shared_ptr<Rent>);
    void removeRent(shared_ptr<Rent>);
    string getClientForRentedVehicle(shared_ptr<Vehicle>);


};





#endif //TRUNK_CURRENTRENTSREPOSITORY_H
