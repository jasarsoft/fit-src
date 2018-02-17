#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int velicina = 10;
	int niz[velicina], suma = 0;

	cout << "Unesite clanove niza" << endl;
	for (int i = 0; i < velicina; i++)
	{
		cin >> niz[i];
		suma += niz[i];
	}

	cout << "Niz sadrzi sljedece elemente\n";
	for (int i = 0; i < velicina; i++)
		cout << "niz[" << i << "] = " << setw(3) << niz[i] << endl;

	cout << "Suma clanova niza iznosi " << suma << endl;
	system("pause");
	return 0;
}