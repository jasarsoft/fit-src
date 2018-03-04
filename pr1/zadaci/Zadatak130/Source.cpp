#include <iostream>
using namespace std;

/*
	Zadatak 119:
	Napravite prototip i definiciju funkcije uvecaj_r i testirajte je u sljedecem programu:
*/

void uvecaj_r(int &);

int main()
{
	int x;
	x = 5;

	uvecaj_r(x); //vrijednost varijable x ce se povecait sa 5 na 6
	uvecaj_r(x); //vrijednost varijable x ce se povecait sa 6 na 7

	cout << x << endl;

	system("pause");
	return 0;
}

void uvecaj_r(int &x)
{
	x++;
}
