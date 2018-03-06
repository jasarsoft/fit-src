#include <iostream>
using namespace std;

/*
	Zadatak 126: 
	Napravite program koji ce provjeravati da li je uneseni broj n prost broj. Koristite: 
	a)  while-petlju 
	b)  do-while-petlju 
	Za pomoc pogledajte ponovo zadatak 99. 
*/

int main()
{
	int x;
	int brojac = 2;
	bool prost = true;
	
	cout << "Unesite broj: ";
	cin >> x;


	do
	{
		if (x % brojac == 0 && x != brojac)
		{
			prost = false;
			break;
		}

		brojac++;
	} while (brojac <= (x/2)+1);

	if (prost)
		cout << "Broj " << x << " je prost!\n";
	else
		cout << "Broj " << x << " nije prost.\n";

	system("pause");
	return 0;
}