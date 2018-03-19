#include <iostream>
#include <iomanip>
using namespace std;

/*	Ispit 25.01.2013. Zadatak 1

	Napisite program koji ce omoguciti kreiranje matrice 5x4. Svaki red u matrici predstavlja
	ucenika, a svaka kolona ocjenu koju ucenik  postigao na 4 predmeta. Uz pomoc
	-	funkcije void unos(int [][4]); omoguciti unos ocjene za svakog od ucenika
		pojedinacno; vodite racuna da se mogu unijet i samo prolazen ocjene (2-5);
	-	funkcije void pozicija(int [][4], int &, int &); pronaci ucenika koji je 
		postigao najmanju ocjenu i predmeta na kojem je postignuta ocjena

	Ispis ucenika koji je postigao najmnaju ocjenu i predmeta na kojem je postignuta namjanja
	ocjena vrsite u funkkciji main.
*/

const int UCENIK = 5;
const int PREDMET = 4;

void unos(int[][PREDMET]);
void pozicija(int[][PREDMET], int&, int&);

int main()
{
	int ocjene[UCENIK][PREDMET];

	cout << "Unesite ocjene (2-5) za pojedinog ucenika i njegove predmete\n";
	unos(ocjene);

	int ucenik, predmet;

	pozicija(ocjene, ucenik, predmet);
	cout << "\nNamjanju ocjenu ima ucenik ";
	cout << (ucenik + 1) << " iz predmeta " << (predmet + 1);
	cout << " i ona iznosi: " << ocjene[ucenik][predmet] << endl;

	system("pause");
	return 0;
}

void unos(int ocjene[][PREDMET])
{
	for (int i = 0; i < UCENIK; i++)
	{
		for (int j = 0; j < PREDMET; j++)
		{
			cout << "Ucenik " << (i + 1);
			cout << " predmet " << (j + 1) << ": ";
			cin >> ocjene[i][j];
			if (ocjene[i][j] < 2 || ocjene[i][j] > 5)
			{
				cout << "Ocjena mora biti od 2 do 5!\n";
				j--;
			}
		}
	}
}

void pozicija(int ocjene[][PREDMET], int &ucenik, int &predmet)
{
	int min = 5;

	for (int i = 0; i < UCENIK; i++)
	{
		for (int j = 0; j < PREDMET; j++)
		{
			if (ocjene[i][j] <= min)
			{
				ucenik = i;
				predmet = j;
				min = ocjene[i][j];
			}
		}
	}
}