#include <iostream>
#include <iomanip>
using namespace std;

/* 
	Napisite program koji ce omoguciti kreiranje matreice 3x3, omoguciti unos elemenata,
	ispis elemenata, racunanje sume elemenata na glavnoj dijagonali, te sumiranje
	elemenata u koloni po izboru korisnika
*/

const int v = 3;

void unos(int[][v]);
void ispis(int[][v]);
int sumaD(int[][v]);
int sumaK(int[][v], int);

int main()
{
	int matrica[v][v], kolona;

	unos(matrica);

	cout << "\nIspis matrice:\n";
	ispis(matrica);

	cout << "\nSuma elemenata glavne dijagonale\n";
	sumaD(matrica);

	cout << endl;
	do
	{
		cout << "Unesite broj kolone a sumu: ";
		cin >> kolona;
	} while (kolona < 0 || kolona >=v);
	
	cout << "\nSuma elementa kolone " << kolona << " je: " << sumaK(matrica, kolona) << endl;

	system("pause");
	return 0;
}

void unos(int m[][v])
{
	for (int i = 0; i < v; i++)
		for (int j = 0; j < v; j++)
		{
			cout << "Unesite matricu M[" << i << "][" << j << "]: ";
			cin >> m[i][v];
		}
}

void ispis(int m[][v])
{
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
			cout << setw(3) << m[i][j];
		
		cout << endl;
	}
}

int sumaD(int m[][v]) //suma diagonale
{
	int s = 0;

	for (int i = 0; i < v; i++)
		s += m[i][i];

	return s;
}

int sumaK(int m[][v], int k) //suma kolone
{
	int s = 0;

	for (int i = 0; i < v; i++)
		s += m[i][k];

	return s;
}
