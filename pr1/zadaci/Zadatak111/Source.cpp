#include <iostream>
using namespace std;

/*
	Slijedi zadatak sa ugnijezdenom for-petljom u kojem necete koristiti funkcije.
	Koristeci izdvojeni dijagram toka za prost broj koji vam je dat u zadatku 100 
	(str. 95, workshop br. 9) napravite dijagram toka za sljedeci program:
	Program treba izracunati sumu prostih brojeva od x do y. 
	(Korisnik unosi vrijednosti x i y).
*/

int main()
{
	int x, y;
	int suma = 0;
	
	cout << "Unesite pocetak niza x: ";
	cin >> x;
	cout << "Unesite kraj niza y: ";
	cin >> y;

	if (x > y)
	{
		cout << "Pocetak mora biti veci od kraja.\n";
		system("pause");
		return 1;
	}
	if (x <= 0 || y <= 0)
	{
		cout << "Vrijednosti ne mogu biti manje ili jednake nuli.\n";
		system("pause");
		return 2;
	}

	for (int i = x; i <= y; i++)
	{
		bool prost = true;

		for (int j = 2; j <= (i / 2) + 1; j++)
		{
			if (i % j == 0 && i != j)
				prost = false;
		}

		if (prost)
			suma += i;
	}

	cout << "Suma prosti brojeva [" << x << ", " << y << "] je: " << suma << endl;

	system("pause");
	return 0;
}