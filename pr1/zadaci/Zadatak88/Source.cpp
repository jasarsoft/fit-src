#include <iostream>
using namespace std;

/*
	Napravite program za racunanje aritmeticke sredine kvadrata brojeva od a do b. 
	Korisnik treba unijeti vrijednosti a i b. 
*/

int main()
{
	int a, b;
	int suma = 0;

	cout << "Unesite pocetnu vrijednost (a): ";
	cin >> a;
	cout << "Unesite krajnju vrijednost (b): ";
	cin >> b;

	if (a > b)
	{
		cout << "Pocetna vrijednost mora biti manja od krajnje.\n";
		system("pause");
		return 1;
	}

	int i;
	for (i = a; i <= b; i++)
	{
		suma += i*i;
	}

	cout << "Arimeticka sredina kvadarata brojeva od " << a << " do " << b << " je: " << suma / i << endl;

	system("pause");
	return 0;
}