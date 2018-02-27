#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da racuna vrijednost y po slijedecoj matematickoj formuli: 

	y = sqrt(x+1) za x > 0
	y = z * sqrt(2) za x = 0
	y = x^2 za x < 0

	Ako je korisnik za x unio broj 0, program treba samo tada traziti unos i broja za z.
	Dodatni zahtjev: Ako korisnik unese broj koji nije pozitivan (tj. da je manji od nule ili
	jednak nuli) program treba ispisati poruku: 'Upozorenje: Niste  unijeli  pozitivan broj.'
*/

int main()
{
	int x, y;

	cout << "Unesite vrijednost x: ";
	cin >> x;

	if (x == 0)
	{
		int z;

		cout << "Unesite vrijednost z: ";
		cin >> z;

		if (z <= 0)
		{
			cout << "Upozorenje: niste unijeli pozitivan broj.\n";
			system("pause");
			return 1;
		}
		else
			y = z * (int)sqrt(2);
	}
	else if (x > 0)
		y = (int)sqrt(x + 1);
	else
		y = (int)pow(x, 2);

	cout << "Vrijednost y je: " << y << endl;

	system("pause");
	return 0;
}