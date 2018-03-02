#include <iostream>
using namespace std;

/*
	Napravite program koji ce pitati korisnika koliko zeli unijeti brojeva. Zatim program treba 
	zahtijevati unos toliko brojeva (mogu biti i decimalni brojevi). Nakon sto je korisnik unio 
	sve brojeve, program treba ispisati aritmeticku sredinu kvadrata unesenih brojeva. 
	Program trebate formatirati prema sljedecem primjeru:
*/

int main()
{
	int n; //broj kombinacija
	float x; //unijeti broj
	float suma = 0.0F;

	cout << "Koliko zelite brojeva unijeti: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Unesite " << i + 1 << ". broj: ";
		cin >> x;
		suma += x*x;
		cout << "...........................  + " << x*x << endl;
	}

	cout << "...........................  ======" << endl;
	cout << "...........................  = " << suma << endl << endl;

	cout << "Arimeticka sredina kvadrata je " << suma / n << endl;

	system("pause");
	return 0;
}