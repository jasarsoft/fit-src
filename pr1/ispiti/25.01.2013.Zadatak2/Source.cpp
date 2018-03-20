#include <iostream>
#include <iomanip>
using namespace std;

/*	Ispit 25.01.2013. Zadatak 2

	Napisati program postujuci sve faze procesa programiranja koji omogucava
	unos prirodnog broja n preko tastature te izracunava sumu:

	S= 3! - 6! + 9! - ... + (-1)^(n+1) * (3n)!

	upotrijebite funkcije:
		void suma(unsigned int, int&);
		int faktorijel(unsigned int);
*/

void suma(unsigned int, int&);
int faktorijel(unsigned int);

int main()
{
	unsigned int broj;

	cout << "Unesite cijeli broj: ";
	cin >> broj;
	
	int rez;

	suma(broj, rez);
	cout << "Suma je: " << setw(14) << rez << endl;

	system("pause");
	return 0;
}

void suma(unsigned int broj, int &rezultat)
{
	rezultat = 0;

	for (unsigned int i = 1; i <= broj; i++)
	{
		rezultat += (int)pow(-1, i + 1) * faktorijel((unsigned)3 * i);
	}
}

int faktorijel(unsigned int broj)
{
	int fakt = 1;

	for (unsigned int i = 2; i <= broj; i++)
	{
		fakt *= i;
	}

	return fakt;
}