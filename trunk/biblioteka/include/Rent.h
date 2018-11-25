#include <boost>
#include <memory>
using namespace std;

class Rent {
private:
    boost::uuids::uuid ID;
    shared_ptr<Client> Client;
    shared_ptr<Vehicle> Vehicle;
    shared_ptr<local_date_time> RentalDateTime;
public:
    Rent(Client, Vehicle, RentalDateTime);
    int rentDuration();
    void returnVehicle();
    string rentInfo();
};