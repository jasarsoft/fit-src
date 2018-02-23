#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
	Napisite program, postujuci sve faze procesa programiranja, koji ce omoguciti 
	unos jednog prirodnog broja, a izracunati i ispisati broj znamenki tog broja. 
*/

int main()
{
	int broj, brojac = 0;

	cout << "Unesite prirodan broj: ";
	cin >> broj;

	if (broj < 0)
		broj = abs(broj); //apsulutna vrijednost broja

	while (broj > 0)
	{
		broj /= 10; //broj = broj / 10; svakim djeljenjem broj izgubi jednu cifru
		brojac++;
	}

	cout << "Broj znamenki unesenog broja je " << brojac << endl;

	system("pause");
	return 0;
}