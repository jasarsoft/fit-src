#include <iostream>
using namespace std;

/*
	Programi ponudjeni u rjesenjima za zadatak 90 i 92 æe pasti ako korisnik unese broj 0 na 
	pitanje koliko on zeli brojeva unijeti u racunar. Zasto? 
	Ako korisnik unese vrijednost 0 za varijablu n, for-petlja se nece izvrsiti. Greska nastaje 
	prilikom racunanja prosjeka kod dijeljenja sa brojem n. 
	Prepravite ovaj nedostatak u programima 90 i 92. 
*/

int main()
{
	int n; //broj kombinacija
	float x; //unijeti broj
	float suma = 0.0F;

	cout << "Koliko zelite brojeva unijeti: ";
	cin >> n;

	if (n < 0)
	{
		cout << "Broj ne moze biti manji od nule!\n";
		system("pause");
		return 1;
	}

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