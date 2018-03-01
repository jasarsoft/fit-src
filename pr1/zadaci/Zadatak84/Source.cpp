#include <iostream>
using namespace std;

/*
	Napravite program za racunanje sume kvadrata brojeva od a do b. Korisnik treba unijeti 
	vrijednosti a i b. 
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
		cout << "Pocetna vrijednost je veca od kranje!\n";
		system("pause");
		return 1;
	}

	for (int i = a; i <= b; i++)
	{
		suma += i*i;
	}

	cout << "Suma kvadrata brojava od " << a << " do " << b << " je: " << suma << endl;

	system("pause");
	return 0;
}