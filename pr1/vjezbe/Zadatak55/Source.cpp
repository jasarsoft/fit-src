#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji ce racunati sumu clanova niza s neparnim indeksom.
	Niz sacinjava 12 cjelobrojnih vrijednosti koje se unose s tastature.
*/

int main()
{
	int const size = 12;
	int niz[size], suma = 0;

	cout << "Unesite clanove niza\n";
	for (int i = 0; i < size; i++)
	{
		cout << i << ". clan niza: ";
		cin >> niz[i];

		if (i % 2 != 0)
			suma += niz[i];
	}

	cout << "\nSuma clanova niza sa neparni indeksom: " << suma << endl;

	system("pause");
	return 0;
}