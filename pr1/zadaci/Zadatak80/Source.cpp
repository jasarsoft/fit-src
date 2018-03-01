#include <iostream>
#include <iomanip>
using namespace std;

/*
	Prepravite prethodni program tako da korisnik 
	unosi pocetak i kraj niza brojeva umjesto fiksno 
	odredjenog niza od 10 do 30: 
*/

int main()
{
	int pocetak, kraj;

	cout << "Unesite pocetak: ";
	cin >> pocetak;
	cout << "Unesite kraj: ";
	cin >> kraj;

	if (pocetak > kraj)
	{
		for (int i = pocetak; i <= kraj; i--)
		{
			if (i % 2 == 0) //i % 2 == 0
				cout << "korijen broja " << i << " je: " << setprecision(3) << sqrt(i) << endl;
			else
				cout << "kvadrat broja " << i << " je: " << pow(i, 2) << endl;
		}
	}
	else
	{
		for (int i = pocetak; i <= kraj; i++)
		{
			if (i % 2 == 0) //i % 2 == 0
				cout << "korijen broja " << i << " je: " << setprecision(3) << sqrt(i) << endl;
			else
				cout << "kvadrat broja " << i << " je: " << pow(i, 2) << endl;
		}
	}

	system("pause");
	return 0;
}