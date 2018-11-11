#include <string>
#include "Address.h"
#include <memory>

using namespace std;
class Client{

private:
   string firstName;
   string lastName;
   string personalID;
   shared_ptr<Address> address;
public:
   shared_ptr<Address> registeredAddress;
public:
    Client();
    Client(string, string, string);
    string clientInfo();
    string getFirstName();
    void setAddress(string,string);
    void setRegAddress(string,string);
};