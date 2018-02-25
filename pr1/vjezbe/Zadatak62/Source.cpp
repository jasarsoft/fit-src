#include <iostream>
#include <iomanip>
using namespace std;

/*
	Naredni program deklarira i inicijalizira tri niza od kojih svaki ima dva reda i tri kolone. 
*/

const int red = 2, kolona = 3;

void ispisi_niza(int[][kolona]);

int main()
{
	int niz1[red][kolona] = {
		{1, 2, 3},
		{4, 5, 6}
	},
		niz2[red][kolona] = {
		1, 2, 3, 4, 5
	},
		niz3[red][kolona] = {
			{1, 2},
			{4}
	};

	cout << "Vrijednost elementa u niz1 po redcima je\n";
	ispisi_niza(niz1);
	cout << "\nVrijednost elemenata u niz2 po redcima je\n";
	ispisi_niza(niz2);
	cout << "\nVrijednost elemenata u niz3 po redcima je\n";
	ispisi_niza(niz3);

	system("pause");
	return 0;
}

void ispisi_niza(int niz[][kolona])
{
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << setw(3) << niz[i][j];
		}
		cout << endl;
	}
}