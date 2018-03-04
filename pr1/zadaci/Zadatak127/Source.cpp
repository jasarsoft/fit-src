#include <iostream>
using namespace std;

/*
	Zadatak 116:
	Napravite  dijagram toka, i na osnovu njega napisite C++ kod za sljedeci zadatak:
	Napravite funkciju void ispisi_rjesenja(float, float, float) koja na osnovu tri 
	ulazna parametra a, b, c treba ispisati na ekran rjesenja (x1 i x2) kvadratne 
	funkcije (ax2+bx+c=0). U funkciji main zahtijevati od korisnika unos clanova 
	kvadratne jednacine  (a, b, c). 
	U slucaju da kvadratna jednacina postane linearna (za a=0), nemojte ispisati rjesenja.
*/

void ispisi_rjesnja(float, float, float);

int main()
{
	float a, b, c;

	cout << "Unesite koeficijent a: ";
	cin >> a;
	cout << "Unesite koeficijent b: ";
	cin >> b;
	cout << "Unesite koeficijent c: ";
	cin >> c;

	ispisi_rjesnja(a, b, c);

	system("pause");
	return 0;
}

void ispisi_rjesnja(float a, float b, float c)
{
	if (a == 0.0F)
	{
		cout << "Funkcija nema rjesnja.\n";
		return;
	}

	float d = b * b - 4 * a * c;
	if (d < 0.0F)
	{
		cout << "Funkcija nema realnih rjesnjea.\n";
		return;
	}

	float x1 = (-b + (float)sqrt(d)) / (2 * a);
	float x2 = (-b - (float)sqrt(d)) / (2 * a);

	cout << "Rjesenje x1 = " << x1 << endl;
	cout << "Rjesenje x2 = " << x2 << endl;
}