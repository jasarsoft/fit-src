#include <iostream>
#include <iomanip>
using namespace std;

/*	25.01.2013. Zadatak 3

	Napisite program u kojem cete:
	-	omoguciti unos niza od 7 karaktera pomocu funkcije void unos(char[], int);
	-	definirati i upotrijebiti funkciju int prebroji(char[], int); koja ce
		vratiti koliko je karaktera u nizu slovo (bez obzira je li rijeè o malim
		ili velikim slovima); vrijednosti koju vrati ova funkcija iskoriste za 
		izracune u ostatku zadatka;
	-	definirati i upotrijebiti funkciju int ostalo(int, int); koja treba vratiti
		koliko karaktra u nizu nisu slova

	Ispis broja slova i svih ostalih karaktera vrsite u funkciji main.
*/

const int KARAKTERA = 7;

void unos(char[], int);
int prebroji(char[], int);
int ostalo(int, int);

int main()
{
	char karakteri[KARAKTERA];

	unos(karakteri, KARAKTERA);

	int slova = prebroji(karakteri, KARAKTERA);

	cout << "Slova ima: " << setw(3) << slova << endl;
	cout << "Ostali karaktera ima: " << setw(3) << ostalo(slova, KARAKTERA) << endl;

	system("pause");
	return 0;
}

void unos(char slova[], int duzina)
{
	for (int i = 0; i < duzina; i++)
	{
		cout << "Unesite " << (i + 1) << " karakater: ";
		cin >> slova[i];
	}
}

int prebroji(char karakteri[], int duzina)
{
	int slova = 0;

	for (int i = 0; i < duzina; i++)
	{
		if ((karakteri[i] >= 'a' && karakteri[i] <= 'z') || (karakteri[i] >= 'A' && karakteri[i] <= 'Z')) //(karakteri[i] >= 'a' && karakteri[i] <= 'Z')
		{
			slova++;
		}
	}

	return slova;
}

int ostalo(int slova, int duzina)
{
	return duzina - slova;
}