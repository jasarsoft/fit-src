#include <iostream>
using namespace std;

/*
	Zadatak 120:
	Napravite program koji ce u funkciji main zahtijevati od korisnika unos dva broja. 
	Napravite funkciju racunaj koja ce primiti 5 parametara. Prva dva parametra ce biti 
	ulazne vrijednost (pass-by-value), a ostala 3 ce biti reference tipa float 
	(pass-by-reference) – izlazna vrijednost. Funkcija racunaj treba izvrsiti matematicke 
	operacije (sabiranje, oduzimanje, mnozenje) i rezultat tih operacija treba smjestiti u 
	zadnja tri parametra funkcije (pass-by-reference).
*/

void racunaj(int, int, float &, float &, float &);

int main()
{
	int x, y;

	cout << "Unesite broj x: ";
	cin >> x;
	cout << "Unesite broj y: ";
	cin >> y;

	float a, b, c;
	racunaj(x, y, a, b, c);
	
	cout << "Zbir je: " << a << endl;
	cout << "Razlika je: " << b << endl;
	cout << "Proizvod je: " << c << endl;

	system("pause");
	return 0;
}

void racunaj(int x, int y, float &s, float &o, float &m)
{
	/* drugi nacin
	float x1 = float(x); //(float)x;
	float y1 = float(y); 

	s = x1 + y1;
	o = x1 - y1;
	m = x1 * y1;
	*/

	s = (float)(x + y);
	o = (float)(x - y);
	m = (float)(x * y);
}