#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da umjesto konstantnog broja 7 koristite neki broj b i 
	umjesto konstantnog broja 6 da koristite broj a. Korisnik treba unijeti vrijednosti a i b. 
*/

int main()
{
	int a, b;
	int y = 0;
	
	cout << "Unesite donju granicu: ";
	cin >> a;

	cout << "Unesite gornju granicu: ";
	cin >> b;

	for (int i = 1; i <= a; i++)
		y += b;

	cout << "Vrijednost y: " << y << endl;

	system("pause");
	return 0;
}