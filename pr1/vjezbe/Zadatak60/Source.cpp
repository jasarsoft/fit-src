#include <iostream>
#include <iomanip>
using namespace std;

/*
	Dat je niz prirodnih brojeva Brojevi od 12 elemenata. Napisite program koji ce prebrojati 
	koliko je elemenata niza djeljivo s tri (3). Kreirajte zasebne funkcije za unos elemenata 
	niza i za provjeru dijeljivosti. 
*/

void unos(int[], int);
int djeljivo(int[], int);

int main()
{
	const int size = 12;
	int niz[size];

	cout << "Unesite 12 clanova cjelobrojnog niza\n";
	unos(niz, size);

	cout << "\nBroj elemenata niza koji su djeljivi sa 3 je: " << djeljivo(niz, size) << endl;

	system("pause");
	return 0;
}

void unos(int niz[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". clan niza: ";
		cin >> niz[i];
	}
}

int djeljivo(int niz[], int size)
{
	int broj = 0; //broj djeljivi elemenata

	for (int i = 0; i < size; i++)
	{
		if (niz[i] % 3 == 0) //!(niz[i] % 3)
			broj++;
	}

	return broj;
}