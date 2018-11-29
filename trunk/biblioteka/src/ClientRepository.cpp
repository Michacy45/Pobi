#include "ClientRepository.h"
using namespace std;

void ClientRepository::addClient(shared_ptr<Client> client) {
    list<shared_ptr<Client>>::iterator it;
    bool check = 0;

    for(it = clients.begin(); it != clients.end(); it++)
    {
        if((*it) == client)
        {
            check = 1;
            break;
        }
    }
    if(!check) clients.push_back(client);
}

void ClientRepository::removeClient(shared_ptr<Client> client) {
    list<shared_ptr<Client>>::iterator it;

    for(it = clients.begin(); it != clients.end(); it++)
    {
        if((*it) == client)
        {
            it = clients.erase(it);
            break;
        }
    }
}

void ClientRepository::clientTypeChange(char type) {
    clientsType->changeType(type);                    //??????????????????
}

void ClientRepository::removeClient(int numerKlienta) {
    list<shared_ptr<Client>>::iterator it = clients.begin();
    advance(it, numerKlienta);
    it = clients.erase(it);
}