#include <iostream>
using namespace std;

/*
	Zadatak 121:
	Napravite funkcije ff (za float) i fi (za integer), koje ce ulaznom parametru ukloniti predznak.
	Cilj ovih funkcija je da aktualni parametar nakon poziva uvijek bude pozitivan broj.
*/

void ff(float &);
void fi(int &);

int main()
{
	int x;
	cout << "Unesite broj: ";
	cin >> x;

	fi(x);
	cout << "Apsulutna vrijednost je: " << x << endl;

	system("pause");
	return 0;
}

void ff(float &x)
{
	x < 0 ? x = -x : x; //x < 0 ? x = -x : x = +x;
}

void fi(int &x)
{
	x < 0 ? x = -x : x; //x < 0 ? x = -x : x = +x;
}