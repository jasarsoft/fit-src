#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napravite program u kome cete deklarisati niz od pet cijelih brojeva i u taj niz smjestite 
	vrijednosti koje se trebaju unijeti sa tastature. Nakon unosa svih brojeva program treba 
	ispisati sve vrijednosti niza na ekran.
*/

int main()
{
	int niz[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Vrijednost za niz[" << i << "]: ";
		cin >> niz[i];
	}

	cout << "==================";
	for (int i = 0; i < 5; i++)
	{
		cout << i << ": ";
		cout << setw(5) << niz[i];
	}

	system("pause");
	return 0;
}