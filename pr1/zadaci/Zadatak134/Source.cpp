#include <iostream>
#include <iomanip>
using namespace std;

/*
	Zadatak 123: 
	Napravite program koji ce od korisnika zahtijevati da unese broj elemenata (x) koji nije 
	veci od 20, a zatim da unese te elemente, jedan za drugim. Zatim, program treba sve 
	elemente ispisati obrnutim redoslijedom. 
*/

int main()
{
	int x;

	cout << "Unesite broj elemenata: ";
	cin >> x;

	if (x > 20 || x < 0)
	{
		cout << "Velicina niza mora biti veca od nule i manja od 20.\n";
		system("pause");
		return 1;
	}

	int niz[20];
	
	for (int i = 0; i < x; i++)
	{
		cout << "Unesite niz[" << i << "]: ";
		cin >> niz[i];
	}

	cout << "Obrinuti ispis niza.\n";
	for (int i = x - 1; i >= 0; i--)
	{
		cout << "niz[" << i << "]: " << setw(5) << niz[i] << endl;
	}

	system("pause");
	return 0;
}