#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kojem cete zbrojiti elemente koji se nalaze na dijagonali kvadratne matrice. Koristite funkcije. 
	(Napomene: kvadratna matrica je matrica koja ima jednak broj redaka i kolona; samo kvadratne matrice imaju dijagonalu;
	elementi na dijagonali imaju jednaku vrijednosti oba indeksa-vidi sliku.) 
*/

const int velicina = 3;

void upis(int[][velicina]);
void ispis(int[][velicina]);
int suma_dijagonale(int[][velicina]);

int main()
{
	int niz[velicina][velicina];

	cout << "Unesite elemente niza:\n";
	upis(niz);

	cout << "Unijeli ste sljedecu matricu:\n";
	ispis(niz);

	cout << "\nSuma dijagonale je: " << suma_dijagonale(niz) << endl;

	system("pause");
	return 0;
}

void upis(int niz[][velicina])
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
			cout << setw(3) << niz[i][j];
		}
		cout << endl;
	}
}

int suma_dijagonale(int niz[][velicina])
{
	int suma = 0;

	for (int i = 0; i < velicina; i++)
	{
		suma += niz[i][i];
	}

	return suma;
}