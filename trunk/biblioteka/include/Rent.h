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
    int price;
public:
    Rent(shared_ptr<Client>, shared_ptr<Vehicle>, int);
    int rentDuration();
    void returnVehicle(int);
    string rentInfo();
    int getPrice();
    shared_ptr<Client> getClient();
    shared_ptr<Vehicle> getVehicle();

};