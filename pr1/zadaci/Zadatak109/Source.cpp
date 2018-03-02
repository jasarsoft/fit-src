#include <iostream>
using namespace std;

/*
	Napravite program koji ce od korisnika zahtijevati unos dva broja, m za pocetak niza i n 
	za kraj niza. Funkcija main treba pozvati funkciju f1 za svaki cijeli broj iz tog niza [m, n]. 
	Funkcija f1 treba provjeriti da li je broj koji ona prima kvadrat nekog broja, tj. da li 
	korijen tog broja cijeli broj. Samo ako jeste, funkcija treba broj ispisati na ekran. 
*/


void f1(int);
void f2(int);


int main()
{
	int m, n;

	cout << "Unesite pocetak niza m: ";
	cin >> m;
	cout << "Unesite kraj niza n: ";
	cin >> n;

	if (m > n)
	{
		cout << "Vrijednost pocetka mora biti manja od kraja.\n";
		system("pause");
		return 1;
	}

	if (m <= 0 || n <= 0)
	{
		cout << "Vrijednosti m i n moraju biti vece od nule.\n";
		system("pause");
		return 2;
	}


	for (int i = m; i <= n; i++)
	{
		f1(i);
	}

	cout << endl;
	system("pause");
	return 0;
}

void f1(int broj)
{
	float k = float(sqrt(broj));

	if (int(k) == k)
		cout << broj << " = " << k << " * " << k << endl;
}