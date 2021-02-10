#include "ZombieBomber.h"

using namespace std;

int main()
{
    srand(time(NULL));

    cout << "1er zombie  " << endl;
    Zombie z1;
	z1.setNom("Jean");
	z1.setPv(50);
	z1.setAttack(5);
	z1.showInfos();
	cout << endl;

	cout << "2e zombie  " << endl;
	Zombie z2(z1);
	z2.setNom("Richard");
	z2.setPv(80);
	z2.setAttack(9);
	z2.showInfos();
	cout << endl;

	cout << "3e zombie  " << endl;
	Zombie z3(z1);
	z3.setNom("Test");
	z3.setPv(200);
	z3.setAttack(9);
	z3.showInfos();
	cout << endl;

	cout << "Bomber " << endl;
	ZombieBomber b;
	b.setNom("Bomby");
	b.setPv (50);
	b.setAttack(10);
    b.showInfos();
    cout << endl;



    return 0;
}
