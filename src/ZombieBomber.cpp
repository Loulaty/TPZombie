#include "ZombieBomber.h"

/*ZombieBomber::ZombieBomber() : Zombie(90,20){
    cout<<"Je suis un Bomber"<<endl;
}

ZombieBomber::ZombieBomber(int a, int p, int b) : Zombie(){
    cout<<"Je suis un Bomber"<<endl;
}

void ZombieBomber::operator+=(ZombieBomber const & a){
    setAttack(getAttack() + a.getAttack());
//    return setAttack();
}*/


ZombieBomber::ZombieBomber()
{
   setAttack(getAttack()*2);
}

ZombieBomber::~ZombieBomber()
{

}

void ZombieBomber::explosion(Zombie* cible){
        cible->setPv(cible->getPv() - (getAttack()*3));
        setPv(0);
        Zombie::~Zombie;
    }
