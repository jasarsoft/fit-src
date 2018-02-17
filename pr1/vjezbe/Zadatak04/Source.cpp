/*
Napisite program koji ce pokusati povecati vrijednost cjelobrojne
varijable broj = 65535 za 1

Ovaj program demonstrira prekoracenje opsega
vrijednosti unsigned short int tipa podatka
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned short broj = 65535;

	cout << "Vrijednost varijable je: " << broj << endl;

	broj = broj + 1;

	cout << "Nakon sabiranja sa 1 je: " << broj << endl;

	system("pause");
	return 0;
}