#include <iostream>
using namespace std;

/*
	Napravite program koji ce pitati korisnika koliko zeli unijeti brojeva.
	Zatim program treba zahtijevati unos toliko cijelih brojeva. 
	Nakon sto je korisnik unio sve te brojeve, program treba ispisati aritmeticku sredinu 
	parnih brojeva, kao i aritmeticku sredinu kubova svih unesenih brojeva. 
*/

int main()
{
	int n, broj;
	int parni, suma_parni;
	unsigned int suma_kubova;

	parni = suma_parni = suma_kubova = 0;

	cout << "Koliko brojeva zelite unijeti: ";
	cin >> n;

	if (n < 0)
	{
		cout << "Broj ne moze biti manji od nule.\n";
		system("pause");
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Unesite " << i + 1 << ". broj: ";
		cin >> broj;

		suma_kubova += (int)pow(broj, 3); //broj*broj*broj

		if (broj % 2 == 0)
		{
			parni++;
			suma_parni += broj;
		}
	}

	cout << "Arimeticka sredina parnih: " << suma_parni / float(parni) << endl;
	cout << "Arimeticka sredina kubova: " << suma_kubova / float(n) << endl;

	system("pause");
	return 0;
}