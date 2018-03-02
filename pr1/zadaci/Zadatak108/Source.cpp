#include <iostream>
using namespace std;

/*
	Napravite program koji ce u funkciji main zahtijevati od korisnika da unese dimenzije 
	bazena (sirina, duzina, visina) u metrima i koji ce pomocu funkcije izracunati i ispisati 
	zapreminu bazenu u litrama. Deklarisite prototip funkcije. 
*/

void volumen(int, int, int);

int main()
{
	int s, d, v;

	cout << "Unesite sirinu bazena: ";
	cin >> s;
	cout << "Unesite duzinu bazena: ";
	cin >> d;
	cout << "Unesite visinu bazena: ";
	cin >> v;

	if (s <= 0 || d <= 0 || v <= 0)
	{
		cout << "Vrijednost ne moze biti manja ili jednaka nuli.\n";
		system("pause");
		return 1;
	}

	volumen(s, d, v);

	cout << endl;
	system("pause");
	return 0;
}

void volumen(int sirina, int duzina, int visina)
{
	unsigned int v;

	v = sirina * duzina * visina * 1000;

	cout << "Zapremina bazena: " << v << " litara.\n";
}