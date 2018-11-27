#include "Client.h"
#include <iostream>


using namespace std;
Client::Client()
{
    cout<< "konstruktor bezparametrowy";
}

Client::Client(string firstName, string lastName, string personalID) {
    this->firstName=firstName;
    this->lastName=lastName;
    this->personalID=personalID;
    address = nullptr;
    registeredAddress = nullptr;
}

string Client::clientInfo() {
    string result = firstName + " " + lastName + " " + personalID;
    if (address) result = result + " " + address->getStreet() + " " + address->getNumber();
    if (registeredAddress)
        result = result + " " + registeredAddress->getStreet() + " " + registeredAddress->getNumber();
    return result;
}

string Client::getFirstName() {
    return firstName;
}

string Client::getLastName() {
    return lastName;
}
void Client::setAddress(string street, string number) {
    shared_ptr<Address> address2 (new Address());
    address=address2;
    address->setNumber(number);
    address->setStreet(street);
}

void Client::setRegAddress(string street, string number) {
    shared_ptr<Address> address2 (new Address());
    registeredAddress=address2;
    registeredAddress->setNumber(number);
    registeredAddress->setStreet(street);
}
 void Client::addRent(shared_ptr<Rent> rent) {
    rents.push_back(rent);
}
