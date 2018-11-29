#ifndef TRUNK_CLIENTREPOSITORY_H
#define TRUNK_CLIENTREPOSITORY_H

#include "Client.h"
#include "ClientType.h"
#include <list>
#include <iterator>

class ClientRepository {
private:
    list<shared_ptr<Client>> clients;
    shared_ptr<ClientType> clientsType;
    char type;
public:
    void addClient(shared_ptr<Client>);
    void removeClient(shared_ptr<Client>);
    void removeClient(int);
    void clientTypeChange(char);
};

#endif