#include <iostream>
#include <iomanip>
using namespace std;

/*	Ispit 21.02.2013. Zadatak 1
	
	Napisite program u kojem ce te kreirati matricu 4x4, te napisit i pozovite funkcije
	- funkcija koja ce inicijaliziratzi matricu da izgleda ovako:
		B	b	b	B
		b	B	B	b
		b	B	B	b
		B	b	b	B

	- funkciju koja ce promjeniti vrijednosti elemenata matrice tako da nakon poziva funkcije
	matrica izgleda ovako:
		b	A	A	b
		A	b	b	A
		A	b	b	A
		b	A	A	b

	Broj i vrstu parametara, kao i povratne virjednosti funkcije odredite sami.
*/

const int DUZINA = 4;

void inic(char[][DUZINA]);
void replace(char[][DUZINA]);
void ispis(char[][DUZINA]);

int main()
{
	char matrica[DUZINA][DUZINA];

	cout << "Inicijalizaicja matrice\n";
	inic(matrica);
	ispis(matrica);

	cout << "Zamjena matrice:\n";
	replace(matrica);
	ispis(matrica);


	system("pause");
	return 0;
}

void ispis(char matrica[][DUZINA])
{
	for (int i = 0; i < DUZINA; i++)
	{
		for (int j = 0; j < DUZINA; j++)
		{
			cout << setw(3) << matrica[i][j];
		}

		cout << endl;
	}
	cout << endl;
}

void inic(char matrica[][DUZINA])
{
	/* Sega inicijalizacija
	matrica = new char[DUZINA][DUZINA]{
		{'B', 'b', 'b', 'B'},
		{'b', 'B', 'B', 'b'},
		{'b', 'B', 'B', 'b'},
		{'B', 'b', 'b', 'B'}
	};*/

	int k = DUZINA;

	for (int i = 0; i < DUZINA; i++)
	{
		for (int j = 0; j < DUZINA; j++)
		{
			if (i == j)
				matrica[i][j] = 'B';
			else
				matrica[i][j] = 'b';
		}
		matrica[i][--k] = 'B';
	}
}

void replace(char matrica[][DUZINA])
{
	for (int i = 0; i < DUZINA; i++)
	{
		for (int j = 0; j < DUZINA; j++)
		{
			if (matrica[i][j] == 'B')
				matrica[i][j] = 'b';
			else
				matrica[i][j] = 'A';
		}
	}
}