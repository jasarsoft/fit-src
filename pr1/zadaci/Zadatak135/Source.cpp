#include <iostream>
#include <iomanip>
using namespace std;

/*
	Zadatak 124: 
	Evo dobre prilike za isprobate konstante varijable:  
	Prepravite program, tako da koristite broj 20 samo jednom u kodu umjesto tri puta. 
	To mozete postici koristenjem konstanti (podatak tipa const). Na taj nacin, ako 
	bude bilo neophodno da vas program može raditi i sa vecim nizom, onda morate samo 
	jedan broj prepraviti (npr. broj 20 zamijenite sa brojem 30) koji se nalazi samo 
	jednom na pocetku programa, inace, bez konstante, bilo bi neophodno na tri 
	mjesta prepravljati broj 20 sa 30. Dodajte i racunanje kvadrata unesenih brojeva. 
	Program formatirajte na sljedeci nacin: 
*/

int main()
{
	int x;
	
	cout << "Unesite duzinu niza: ";
	cin >> x;

	if (x > 20 || x < 0)
	{
		cout << "Velicina niza mora biti veca od nule i manja od 20.\n";
		system("pause");
		return 1;
	}

	const int v = 20;
	int niz[20];

	for (int i = 0; i < x; i++)
	{
		cout << "niz[" << i << "]: ";
		cin >> niz[i];
	}

	cout << "==============================\n";
	for (int i = x - 1; i >= 0; i--)
	{
		cout << "niz[" << i << "]: ";
		cout << niz[i] << " * " << niz[i] << " = ";
		cout << niz[i] * niz[i] << endl;
	}

	system("pause");
	return 0;
}