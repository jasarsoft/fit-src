#include <iostream>
#include <iomanip>
using namespace std;

/*
	Dati su nizovi niz1 i niz2 od po 7 realnih elemenata. Napisite program koji ce formirati 
	niz3 ciji ce elementi biti umnosci odgovarajucih elemenata niza1 i niza2. Kreirajte 
	zasebne funkcije za unos elemenata niza, izracunavanje elemenata treceg niza, te za 
	ispis elemenata niza. 
*/

void unos(float[], int);
void ispis(float[], int);
void izracun(float[], float[], float[], int);

int main()
{
	const int size = 7;
	float niz1[size], niz2[size], niz3[size];

	cout << "Unesite 7 realnih elemenata niza 1:\n";
	unos(niz1, size);
	
	cout << "\nUnesite 7 realnih elemanata niza 2:\n";
	unos(niz2, size);

	cout << "\nUmnosci elemenata niza1 i niza2 su:\n";
	izracun(niz1, niz2, niz3, size);
	ispis(niz3, size);

	system("pause");
	return 0;
}

void unos(float niz[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". clan niza: ";
		cin >> niz[i];
	}
}

void ispis(float niz[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". clan niza je: " << showpoint << setw(10) << niz[i] << endl;
	}
}

void izracun(float niz1[], float niz2[], float niz3[], int size)
{
	for (int i = 0; i < size; i++)
	{
		niz3[i] = niz1[i] * niz2[i];
	}
}