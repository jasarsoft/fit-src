#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji korisniku omogucava unos pozitivnih cijelih brojeva (vecih od nula).
	Program se treba izvrsavati sve dok korisnik ne unese broj 20. Na kraju program treba 
	ispisati sumu svih parnih unesenih brojeva. Postujte sve faze procesa programiranja. 
*/

int main()
{
	int broj = 0, suma = 0;

	do
	{
		if (broj % 2 == 0 && broj >= 0)
			suma += broj;
		cout << "Unesite broj: ";
		cin >> broj;
	} while (broj != 20);

	cout << "Suma parnih brojeva je: " << suma << endl;

	system("pause");
	return 0;
}