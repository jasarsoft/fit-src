#include <iostream>
using namespace std;

/*
	Zadatak 132:                                                                   
	Izraditi program u programskom jeziku C++ koji izracunava izraz:  

	Povratna vrijednost funkcije ZbirKubova i parametri m i n su tipa int. 
	Omoguiti ponavljanje unosa ulaznih podataka (citavog programa) ako korisnik to zeli. 
*/

int zbir_kubova(int, int);

int main()
{
	int m, n;
	bool unos = true;

	do
	{
		cout << "Unesite m: ";
		cin >> m;
		cout << "Unesite n: ";
		cin >> n;

		int x;
		cout << "Unesite x: ";
		cin >> x;

		int z = (zbir_kubova(m, n)) / (x*x);

		cout << "Rezultat: " << z << endl;
		
		char answer;
		cout << "Da li zelite ponoviti (d/n)? ";
		cin >> answer;
		answer == 'd' ? unos = true : unos = false;
	} while (unos);

	

	system("pause");
	return 0;
}

int zbir_kubova(int m, int n)
{
	int suma = 0;

	if (m <= 0 || n <= 0)
		return suma;

	if (m < n)
	{
		for (int i = m; i <= n; i++)
		{
			suma += i*i*i;
		}
	}
	else
	{
		for (int i = m; i <= n; i--)
		{
			suma += i*i*i;
		}
	}

	

	return suma;
}