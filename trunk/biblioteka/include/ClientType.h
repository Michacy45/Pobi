#ifndef TRUNK_CLIENTTYPE_H
#define TRUNK_CLIENTTYPE_H

class ClientType{
private:
    //char type;
    int vehiclesAmount;
    double mod;
public:
    //ClientType(char type = 'Z');
    int getVehiclesAmount();
    double getMod();
    void changeType(char type = 'Z');
};

#endif
