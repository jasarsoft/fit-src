#include <iostream>
using namespace std;

/*
	Napravite program koji ce od korisnika zahtijevati unos dva broja, m za indeks 
	pocetka niza i n za indeks kraja niza. Funkcija main treba pozvati funkciju f1 
	za svaki cijeli broj iz tog raspona [m, n]. Funkcija f1 treba provjeriti da li 
	je vrijednost koju ona prima kvadrat nekog broja. Samo ako jeste, funkcija ga 
	treba ispisati na ekran. Implementacija definicije funkcije f1 nam nije sada 
	bitna. Obratite paznju na poziv i prototip funkcije f1.

	Prepravite gornji program slijedeci navedene zahtjeve:
	-	definiciju funkcije f1 nemojte mijenjati
	-	for-petlja sa pozivom funkcije f1 se mora sada nalaziti u novoj funkciji f0
	-	funkciju f0 pozovite samo jednom iz funkcije main
	-	formatirajte program tako da ispisuje sljedece poruke:
*/

void f0(int, int);
void f1(int);


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

	f0(m, n);

	cout << endl;
	system("pause");
	return 0;
}

void f0(int m, int n)
{
	for (int i = m; i <= n; i++)
	{
		f1(i);
	}
}

void f1(int broj)
{
	float k = float(sqrt(broj));

	if (int(k) == k)
		cout << broj << " = " << k << " * " << k << endl;
}