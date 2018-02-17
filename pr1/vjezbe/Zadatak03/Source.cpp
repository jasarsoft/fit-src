/*
	Napisite program koji ce pokusati povecati vrijednost cjelobrojne
	varijable broj = 2147483647 za 1

	Ovaj program demonstrira prekoracenje opsega
	vrijednosti cjelobrojnog tipa podatka
*/

#include <iostream>
using namespace std;

int main()
{
	int broj = 2147483647;

	cout << "Vrijednost varijable je: " << broj << endl;

	broj = broj + 1;

	cout << "Nakon sabiranja sa 1 je: " << broj << endl;

	system("pause");
	return 0;
}