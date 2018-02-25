#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisete program koji ce racunati sumu clanova niza kojeg sacinjava deset 
	cjelobrojnih vrijednosti koje unosi korisnik preko tastature.
*/

int main()
{
	const int v = 10;
	int suma = 0, niz[v];

	for (int i = 0; i < v; i++)
	{
		cout << "Unesite " << i << ". clan niza: ";
		cin >> niz[i];
		suma += niz[i];
	}

	cout << "Element " << setw(13) << "vrijednost\n";
	for (int i = 0; i < v; i++)
		cout << setw(7) << i << setw(13) << niz[i] << endl;

	cout << "\nSuma clanova niza iznosi " << suma << endl;

	system("pause");
	return 0;
}