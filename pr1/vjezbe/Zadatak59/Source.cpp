#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
	Dat je cjelobrojni niz od 8 elemenata. Napisite program koji ce omoguciti korisniku da 
	unese vrijednosti clanova niza, te provjeriti i ispisati koliko je clanova niza vece od 10. 
	Kreirajte zasebne funkcije za unos elemenata niza, za ispis elemenata niza i za provjeru 
	koliko je elemenata niza vece od zadane vrijednosti. 
*/

void unos(int[], int);
void ispis(int[], int);
int provjera(int[], int);

int main()
{
	const int size = 8;
	int niz[size];

	cout << "Unesite cjelobrojne clanove niza od 8 clanova:\n";
	unos(niz, size);

	cout << "\nIspis clanova niza\n";
	ispis(niz, size);

	cout << "\nUkupan broj clanova niza veci od 10 je: " << provjera(niz, size) << endl;

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

void ispis(int niz[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". clan niza je: " << setw(5) << niz[i] << endl;
	}
}

int provjera(int niz[], int size)
{
	int broj = 0; //broj nizova veci od 10

	for (int i = 0; i < size; i++)
	{
		if (niz[i] > 10)
			broj++;
	}

	return broj;
}