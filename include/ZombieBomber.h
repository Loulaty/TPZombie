#ifndef ZOMBIEBOMBER_H
#define ZOMBIEBOMBER_H

#include <Zombies.h>


class ZombieBomber: public Zombie
{
    public:
    ZombieBomber();
        virtual ~ZombieBomber();

    void explosion(Zombie* cible);

};

#endif // ZOMBIEBOMBER_H
