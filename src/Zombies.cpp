#include "Zombies.h"

Zombie::Zombie(){
    pv = 0;
    attack = 0;
	nom = "Default";
}

Zombie::Zombie(int p,int a){
    pv = p;
    attack = a;
}

Zombie::Zombie(string n){
    nom = n;
}

Zombie::~Zombie(){
    cout<<"Zombie est mort"<<endl;
}


int Zombie::getPv() const
{
	return pv;
}

void Zombie::setPv(int p) {/**<  */
	if (p > 100 || p < 0) {
        cout<< "trop de pv"<< endl;
		cout<< "se decompose"<< endl;
	}
	else {
		pv = p;
	}
}

string Zombie::getNom() const
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

int Zombie::getAttack() const
{
	return attack;
}

void Zombie::setAttack(int a)
{
	if (a> 10 || a < 0) {
        cout<< "trop de force"<< endl;
		cout<< "se decompose"<< endl;
	}
	else {
		attack = a;
	}
}

void Zombie::showInfos() const
{
	cout << "nom: " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
}

void Zombie::attackZombie(Zombie* cible){
        cible->setPv(cible->getPv() - getAttack());
    }


