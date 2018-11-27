#ifndef TRUNK_CLIENT_H
#define TRUNK_CLIENT_H

#include <iostream>
#include <string>
#include "Address.h"
#include <memory>
#include <vector>
#include <sstream>
using namespace std;
class Rent;
class Client{

private:
   string firstName;
   string lastName;
   string personalID;
   shared_ptr<Address> address;
   shared_ptr<Address> registeredAddress;
   vector<shared_ptr<Rent>> rents;

public:
    Client();
    Client(string, string, string);
    string clientInfo();
    string getFirstName();
    string getLastName();
    void setAddress(string,string);
    void setRegAddress(string,string);
    void addRent(shared_ptr<Rent>);
};

#endif