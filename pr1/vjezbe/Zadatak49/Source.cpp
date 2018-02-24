#include <iostream>
using namespace std;

/*
	Napisite program u kojem cete korisniku omoguciti unos jednog prirodnog broja. 
	Program treba izracunati i ispisati sumu svake druge znamenke broja gledano s desna na 
	lijevo i broj znamenki koje su sumiranje. Upotrijebite funkciju: 
 
	int suma (int, int &); 
*/

int suma(int, int &);

int main()
{
	int broj, brojac = 0;

	do
	{
		cout << "Unesite broj: ";
		cin >> broj;
	} while (broj < 0);

	cout << "Suma svake druge znamenke broja " << broj << " iznosi " << suma(broj, brojac);
	cout << " a zbrojeno je " << brojac << " znamenki.\n";

	system("pause");
	return 0;
}

int suma(int broj, int &brojac)
{
	int ostatak, s = 0, i = 0;

	while (broj > 0)
	{
		ostatak = broj % 10;
		broj /= 10;
		i++;

		if (i % 2 == 0)
		{
			s += ostatak;
			brojac++;
		}
	}

	return s;
}