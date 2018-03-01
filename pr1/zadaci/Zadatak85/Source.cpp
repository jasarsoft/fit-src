#include <iostream>
using namespace std;

/*
	Napravite program za racunanje sume kvadrata brojeva koji su djeljivi sa 19 ili nisu 
	djeljivi sa 17, od a do b. Korisnik treba unijeti vrijednosti a i b. 
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
		cout << "Pocetna vrijednost je veca od krajnje.\n";
		system("pause");
		return 1;
	}

	for (int i = a; i <= b; i++)
	{
		if (i % 19 == 0 || i % 17 != 0)
			suma += i*i;
	}

	cout << "Vrijednost sume kvadrata od " << a << " do " << b << " je: " << suma << endl;

	system("pause");
	return 0;
}