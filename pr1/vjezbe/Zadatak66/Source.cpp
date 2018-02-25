#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kojem cete deklarirati matricu 4x4. Omogucite 
	korisniku da unese vrijednosti clanova niza preko tastature, ispisite matricu, te 
	omogucite korisniku da provjeri je li neka vrijednost element matrice i u kojem 
	retku se nalazi. Kreirajte zasebne funkcije za unos elemenata matrice, za ispis 
	elemenata matrice, te za provjeru je li trazena vrijednost element matrice. 
*/

const int velicina = 4;

void unos(int[][velicina]);
void ispis(int[][velicina]);
bool trazeni_element(int[][velicina], int, int &);

int main()
{
	int trazen, pozicija = 0;
	int matrica[velicina][velicina];

	cout << "Unesite clanove niza\n";
	unos(matrica);

	cout << "Unesite vrijednost za koju zelite provjeriti da li je element niza: ";
	cin >> trazen;

	if (trazeni_element(matrica, trazen, pozicija))
		cout << "Da, trazena vrijednost je element niza i nalazi se u retku " << pozicija << endl;
	else
		cout << "Ne, trazne vrijednost nije element niza\n";

	system("pause");
	return 0;
}

void unos(int niz[][velicina])
{
	for (int i = 0; i < velicina; i++)
	{
		for (int j = 0; j < velicina; j++)
		{
			cout << "niz[" << i << "][" << j << "]: ";
			cin >> niz[i][j];
		}
	}
}

void ispis(int niz[][velicina])
{
	for (int i = 0; i < velicina; i++)
	{
		for (int j = 0; j < velicina; j++)
		{
			cout << setw(4) << niz[i][j];
		}

		cout << endl;
	}
}

bool trazeni_element(int niz[][velicina], int trazeni, int &pozicija)
{
	bool value = false;

	for (int i = 0; i < velicina; i++)
	{
		for (int j = 0; j < velicina; j++)
		{
			if (niz[i][j] == trazeni)
			{
				value = true;
				pozicija = i;
			}
		}
	}

	return value;
}