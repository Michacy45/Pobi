#include "Address.h"
using namespace std;

string Address::getStreet() {
    return street;
}
string Address::getNumber() {
    return number;
}
void Address::setNumber(string number) {
    this->number=number;
}
void Address::setStreet(string street) {
    this->street=street;
}

