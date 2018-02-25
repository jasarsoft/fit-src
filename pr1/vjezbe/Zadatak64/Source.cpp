#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kojem cete deklarirati matricu 3x4. Omogucite korisniku da unese vrijednosti clanova niza s 
	tastature, te da izabere red i kolonu ciju sumu zeli izracunati. Za izracunavanje sume reda, sume kolone, 
	unos i ispis elemenata upotrijebite funkcije. 
*/

const int red = 3, kolona = 4;

void unos(int[][kolona]);
void ispis(int[][kolona]);
int sumareda(int[][kolona], int);
int sumakolone(int[][kolona], int);

int main()
{
	int zred, zkolona;
	int niz[red][kolona];
	
	cout << "Unesite clanove niza\n";
	unos(niz);

	cout << "\nUnijeli ste sljedecu matricu:\n";
	ispis(niz);

	cout << "Unesite red koji zelite sumirati: ";
	cin >> zred;
	if (zred > 0 && zred < red)
	{
		zred--;
		cout << "Suma reda sa indeksom " << zred << " iznosi " << sumareda(niz, zred) << endl;
	}
	else
		cout << "Takav red ne postoji!\n";

	cout << "Unesite kolonu koju zelite sumirati: ";
	cin >> zkolona;
	if (zkolona > 0 && zkolona < kolona)
	{
		zkolona--;
		cout << "Suma reda sa indeksom " << zkolona << " iznosi " << sumakolone(niz, zkolona) << endl;
	}
	else
		cout << "Takva kolona ne postoji!\n";

	system("pause");
	return 0;
}

void unos(int niz[][kolona])
{
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << "niz[" << i << "][" << j << "] = ";
			cin >> niz[i][j];
		}
	}
}

void ispis(int niz[][kolona])
{
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << setw(5) << niz[i][j];
		}

		cout << endl;
	}
}

int sumareda(int niz[][kolona], int zred)
{
	int total = 0;

	for (int i = 0; i < red; i++)
	{
		total += niz[zred][i];
	}

	return total;
}

int sumakolone(int niz[][kolona], int zkolona)
{
	int total = 0;

	for (int i = 0; i < zkolona; i++)
	{
		total += niz[i][zkolona];
	}

	return total;
}