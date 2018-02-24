#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program, postujuci sve faze procesa programiranja, koji korisniku omogucava unos jednog 
	prirodnog broja. Nakon toga program treba omoguci drugom korisniku da pogodi o kojem je broju rijec. 
	Program treba da se izvrsava sve do momenta dok drugi korisnik ne pogodi o kojem broju je rijec.
*/

int main()
{
	int broj, unos;
	bool pogodjen = false;

	cout << "Igrac 1: Unesite vas omiljeni broj: ";
	cin >> broj;

	system("cls");

	cout << "Igrac 2\n";
	do
	{
		cout << "Pogodite broj: ";
		cin >> unos;
		if (unos == broj)
		{
			pogodjen = true;
			cout << "Pogodili ste broj!\n";
		}
		else
			cout << "Niste pogodili broj!\n";
	} while (pogodjen == false);

	system("pause");
	return 0;
}