#include "Client.h"

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
    ostringstream result;
    result << firstName << " " << lastName << " " << personalID;
    if (address) {
        result << " " << address->getStreet() << " " << address->getNumber();
    }
    if (registeredAddress) {
        result << " " << registeredAddress->getStreet() << " " << registeredAddress->getNumber();
    }

    for(int i=0; i<=rents.size(); i++)
    {
        result << rents[i].;
    }

    return result.str();
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
