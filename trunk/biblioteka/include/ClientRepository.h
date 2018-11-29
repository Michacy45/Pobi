#ifndef TRUNK_CLIENTREPOSITORY_H
#define TRUNK_CLIENTREPOSITORY_H

#include "Client.h"
#include <list>
#include <iterator>

class ClientRepository {
private:
    list<shared_ptr<Client>> clients;
public:
    void addClient(shared_ptr<Client>);
    void removeClient(shared_ptr<Client>);
    void removeClient(int);
    void clientTypeChange(shared_ptr<Client>);
};

#endif