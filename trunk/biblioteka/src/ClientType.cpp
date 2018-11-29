#include "ClientType.h"

ClientType::ClientType(char type) {
    this->type=type;
    changeType(type);
}

void ClientType::changeType(char type){
    switch(type)
    {
        case 'A':
            mod=0.5;
            vehiclesAmount=10;
            break;
        case 'B':
            mod=0.75;
            vehiclesAmount=5;
            break;
        case 'C':
            mod=0.9;
            vehiclesAmount=3;
            break;
        default:
            mod=1;
            vehiclesAmount=1;

    }
}

int ClientType::getVehiclesAmount() {
    return vehiclesAmount;
}

double ClientType::getMod() {
    return mod;
}