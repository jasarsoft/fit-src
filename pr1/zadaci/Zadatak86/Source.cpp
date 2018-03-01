#include <iostream>
using namespace std;

/*
	Napravite program za racunanje sume kvadrata parnih brojeva i sumu kubova neparnih 
	brojeva od a do b. Korisnik treba unijeti vrijednosti a i b. 
*/

int main()
{
	int a, b;
	int suma = 0;

	cout << "Unesite pocetnu vrijednost a: ";
	cin >> a;
	cout << "Unesite krajnju vrijednost b: ";
	cin >> b;

	if (a > b)
	{
		cout << "Pocetna vrijednost treba biti manja od krajnje.\n";
		system("pause");
		return 1;
	}

	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			suma += i*i;
		else
			suma += i*i*i;
	}

	cout << "Vrijednost sume od " << a << "-" << b << " je: " << suma << endl;

	system("pause");
	return 0;
}