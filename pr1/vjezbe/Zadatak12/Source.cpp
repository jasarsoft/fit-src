#include <iostream>
using namespace std;

//izrazi - prioritet operatora

int main()
{
	//sve varijable su deklariranje kao cjelobrojne jer su 
	//i operandi u izrazu cjelobrojni, primjenjuje se opertor %
	int r1, r2, r3, r4, r5, r6;

	r1 = 70 - 5 % 3 * 4 + 9;
	cout << "Rezultat izraza 70 - 5 % 3 * 4 + 9 je " << r1 << endl;

	r2 = 7 * 10 - 5 % 3 * 4 + 9;
	cout << "Rezutlata izraza 7 * 10 - 5 % 3 * 4 + 9 je " << r2 << endl;

	r3 = (7 * (10 - 5) % 3) * 4 + 9;
	cout << "Rezutlat izraza (7*(10-5)%3)*4+9 je " << r3 << endl;

	r4 = 7 % 5 % 3;
	cout << "Rezultat izraza 7%5%3 je " << r4 << endl;

	r5 = 7 % (5 % 3);
	cout << "Rezultat izraza 7%(5%3) je " << r5 << endl;

	r6 = (7 % 5 % 3);
	cout << "Rezultat izraza (7%5%3) je " << r6 << endl;

	system("pause");
	return 0;
}