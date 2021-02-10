#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie
{
private:
	int pv = 50;
	string nom = "nom";
	int attack = 5;

public:
    //CONSTRUCTEURS
    Zombie();
    Zombie(int p, int a);
    Zombie(string n);


    //DESTRUCTEUR
    ~Zombie();

    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int p);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);

    //GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int a);

	void showInfos() const;

    void attackZombie(Zombie* cible);

};

#endif // ZOMBIE_H
