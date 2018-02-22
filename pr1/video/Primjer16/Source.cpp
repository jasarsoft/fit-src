#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program postojuci sve faze programiranja  koji ce omoguciti kreiranje matrice 5x4.
	Svaki red u matrici predstavalj igraca a svaka od kolona utakmicu na kojoj je igrac igrao.
	Uz pomoc: 
	funckije: void unos(int [][4]); omogucite unos postignutih poena na svakoj utakmici:
	broj poena moze biti 0 ukoliko igrac nije igrao na nekoj utakmici, ali ne moze biti manje od toga;
	- funkcije int igrac(int[][4]); pronaci igraca koji je postigao namanje poena;
	(Ako postoji veci broj igraca s istim brojem poena pronadjite poziciju posljednjeg u matrici)
	- funkcija: float prosjecna(int[][4], int]; izracunati prosjecan broj poena na utakmci koju odabere korisnik;
	ispis igraca koji je postigao poena kao i prosjecnog broja poena na utakmici vrsite u funkciji main
*/


void unos(int[][4]);
void ispis(int[][4]);
int igrac(int[][4]);
float prosjecna(int[][4], int);

int main()
{
	int matrica[5][4], utakmica = 0;

	cout << "Unesite matricu:\n";
	unos(matrica);
	cout << "\nIspis matrice:\n";
	ispis(matrica);

	cout << "\nIgrac sa namjanje postignuti poena " << igrac(matrica) << endl;

	do
	{
		cout << "Unesite zeljenu utakmicu ";
		cin >> utakmica;
	} while (utakmica < 0 || utakmica > 3);

	cout << "Prosjek poena na utakmici " << utakmica << " iznosi " << prosjecna(matrica, utakmica) << endl;

	system("pause");
	return 0;
}

void unos(int n[][4])
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
		{
			cout << "[" << i << "][" << j << "]: ";
			cin >> n[i][j];
			if (n[i][j] < 0)
				j--;
		}
}

void ispis(int n[][4])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(3) << n[i][j];
		}
		cout << endl;
	}
}

int igrac(int n[][4])
{
	int pozicija = 0;
	int min = n[0][0];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
		{
			if (n[i][j] <= min)
			{
				min = n[i][j];
				pozicija = i;
			}
		}

	return pozicija;
}

float prosjecna(int n[][4], int u)
{
	int s = 0;

	for (int i = 0; i < 5; i++)
	{
		s += n[i][u];
	}

	return (s / 5.0F);
}