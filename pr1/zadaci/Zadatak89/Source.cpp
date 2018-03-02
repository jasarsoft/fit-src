#include <iostream>
using namespace std;

/*
	Napravite program koji ce pitati korisnika koliko zeli unijeti brojeva. Zatim program treba 
	zahtijevati unos toliko brojeva (mogu biti i decimalni brojevi). Nakon sto je korisnik unio 
	sve brojeve, program treba ispisati njihovu sumu.  
	Primjer rada program da je na sljedecoj slici. 
*/

int main()
{
	int n;
	float x;
	float suma = 0.0F;

	cout << "Koliko zelite brojeva unijeti: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Unesite " << i << ". broj: ";
		cin >> x;
		suma += x;
	}

	cout << "Suma: " << suma << endl;

	system("pause");
	return 0;
}