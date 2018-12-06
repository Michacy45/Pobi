#ifndef TRUNK_RENT_H
#define TRUNK_RENT_H

//#include <boost>
#include <memory>
#include <sstream>
#include "Client.h"
#include "Vehicle.h"
#include <exception>
using namespace std;

class Rent {
private:
    //boost::uuids::uuid ID;
    shared_ptr<Client> client;
    shared_ptr<Vehicle> vehicle;
    int rentDataTime;
    int returnDataTime;
    double price;
public:
    Rent(shared_ptr<Client>, shared_ptr<Vehicle>, int);
    int rentDuration();
    void returnVehicle(int);
    string rentInfo();
    double getPrice();
    shared_ptr<Client> getClient();
    shared_ptr<Vehicle> getVehicle();

};

#endif