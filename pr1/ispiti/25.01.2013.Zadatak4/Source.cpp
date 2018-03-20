#include <iostream>
#include <iomanip>
using namespace std;

/*	25.01.2013. Zadatak 4

	Napisite program koji ce omoguciti unos prirodnog broja n, te ga sifrirati prema
	sljedecem pravilu:
		sve znamenke djeljive sa 3 zamjeniti brojem po zelji korisnika (korisnik unosi
		vrijednost preko tastature) a ostale znamenek ostaju kakve su i bile.

	Za sifriranje upotrijebite funkciju
		int Sifriranje(int, int);

	Unos cijelog broja, ispis njegove sifrirane verzije, kao i zamjenskes znamenek vrsiti
	u funkciji main
*/

int sifriranje(int, int);

int main()
{
	int n, s;

	do
	{
		cout << "Unesite cijeli broj: ";
		cin >> n;
		cout << "Unesite broj za sifriranje: ";
		cin >> s;
	} while (n < 0 || s < 0);
	
	cout << "Sifriran broj je: " << sifriranje(n, s);

	system("pause");
	return 0;
}

int sifriranje(int broj, int zamjena)
{
	int ostatak = 0;
	int mnozitelj = 1;
	int vrijednost = 0;

	do
	{
		 ostatak = broj % 10;
		if (ostatak % 3 == 0)
			ostatak = zamjena;

		vrijednost += ostatak * mnozitelj;
		broj /= 10;
		mnozitelj *= 10;
	} while (broj > 0);

	return vrijednost;
}