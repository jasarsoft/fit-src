#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
	Napisite program, postujuci sve faze procesa programiranja, koji ce omoguciti 
	unos jednog prirodnog broja, a ispisati njegov binarni ekvivalent. 
*/

int main()
{
	int broj, binarni = 0, brojac = 0, ostatak;

	cout << "Unesite jedan prirodan broj: ";
	cin >> broj;

	if (broj < 0)
		broj = abs(broj);

	while (broj > 0)
	{
		ostatak = broj % 2;
		binarni = binarni + ostatak * pow(10.0, brojac);
		brojac++;
		broj /= 2;
	}

	cout << "Binarni ekvivalent unesnog broja je " << binarni << endl;

	system("pause");
	return 0;
}