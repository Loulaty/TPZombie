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


/*setAttack(int a)
{
	if (a> 10 || a < 0) {
		attack = 0;
		cout<< "se decompose"<< endl;
	}
	else {
		attack = a;
	}
}
*/



ZombieBomber::ZombieBomber()
{
//    void ZombieBomber::operator+=(ZombieBomber){
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

