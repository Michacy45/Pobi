#ifndef TRUNK_REPOSITORY_H
#define TRUNK_REPOSITORY_H

class Repository{
public:
    virtual void create() = 0;
    virtual void remove() = 0;
};
#endif
