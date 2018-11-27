#include "Rent.h"
using namespace std;
Rent::Rent(shared_ptr<Client> client, shared_ptr<Vehicle> vehicle, int rentDataTime) {
    this->client=client;
    this->vehicle=vehicle;
    this->rentDataTime=rentDataTime;
    price=0;
    boost::uuids::nil_generator gen;
    ID=gen();
    shared_ptr<Rent> rent (this)
    client.addRent(rent);
}
void Rent::returnVehicle(int returnDataTime) {
    this->returnDataTime=rentDataTime;
    price=vehicle.getBaseRentPrice()*rentDuration();
    //returnDataTime=dzisiejsza data

}

int Rent::rentDuration() {
    //return data_dzisiejsza-rentDataTime;
}

string Rent::rentInfo() {
    ostringstream info;
    info << " Id: " << ID << " Data poczatkowa: " << rentDataTime
    << " data koncowa "<< returnDataTime << " Imie i nazwisko: "<< client.getFirstName()
    <<" "<<client.getLastName();
    return info.str();
}

int Rent::getPrice(){
    return price;
}

shared_ptr<Client> Rent::getClient(){
    return client;
}

shared_ptr<Vehicle> Rent::getVehicle(){
    return vehicle;
}